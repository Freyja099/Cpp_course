// * Banking program : 

#include <iostream>
using namespace std;

double money;
double Add(double a);
double Subtract(double a);

int main()
{
    double a;
    cout << " Enter your initial capital " <<endl;
    cin >> money;

    int choice;
    cout << " To deposit money enter : 1 \n "
            <<  " To withdraw money enter : 2  \n  "
            <<   " To exit press any other key " <<endl;
    cin >>choice;

    switch(choice)
    {
        case 1 :
        {
            cout << "Enter the amount you want to deposit : " ;
            cin >>a;
            cout <<endl;
            if (a > 0)
            Add (a);
            else
            cout << " This operation is not possible please try again" <<endl;
        }
        break;

        case 2 : 
        {
            cout << " Enter the amount you want to withdraw : " ;
            cin >> a;
            cout << endl;
            if (a > 0)
            Subtract(a);
            else
            cout << " This operation is not possible please try again" <<endl;
        }
        break;

        default :
        cout << " No operation has been performed " ;
        break;  
    }

    
    cout << " Your current capital : " << money << " $ " << endl;

    return 0;
}

double Add(double a)
{
    money += a ;
    return money;
}

double Subtract(double a)
{
    money -= a ;
    return money;
}
