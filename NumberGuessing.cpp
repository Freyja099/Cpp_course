// * Session 7 : Random number guessing generator

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int num ;
    int guess;
    int i = 0 ;
    
    srand(time(NULL));

    num = rand() % 10 + 1 ;
    
    cout << " Random number is : " << num <<endl;// * just to make sure the random number generated changes
    
    cout << " *****************Number guessing game***************** " <<endl;
    do
    {
        cout << " Enter your guess (1-10) : " <<endl;
        cin >> guess ;

        if (guess == num)
        {
            cout << " Congratulations , you won ." <<endl ;
            i = 0 ;
        }
        else
        {
            cout << " Sorry , you lost ! " <<endl ;
            cout << " If you want to try again enter 1 , if you want to quit enter 0 " <<endl;
            cin >> i ;
        }
    }while(i == 1);
    

    return 0;
}