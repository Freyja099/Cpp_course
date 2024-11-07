// * Let the user fill the array 

#include <iostream>
using namespace std;

int main()
{
    string array[5];
    string temp;
    cout << " Enter 5 names or less " << endl;
    for (int i=0 ; i < 5 ; i++)
    {
        cout << " Name number #"<< i+1 << "or 'q' to quit :";
        getline(cin , temp);

        if (temp == "q")
        break;
        else 
        array[i] = temp;
    }

    for (string a : array)
    cout << a << endl;

    // * Another way to display the array without showing the empty spaces is : " !array[i].empty() " the loop will continue as long as array[i] is not empty

    for(int i = 0 ; !array[i].empty() ; i++)
    {
        cout << array [i] <<endl;
    }

    return 0;
}