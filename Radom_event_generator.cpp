// * Session 6 : Random event generator

// * To create a Random event generator we have to use random numbers and switch
// * this might be useful in games 

// * Let's say who ever got an even number win 

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int RandNum = rand () % 6 + 1;
    cout << " The number you got is : " << RandNum <<endl;
    switch(RandNum)
    {
        case 1 : cout << "You won !" ;
        break;
        case 2 : cout << "Try again" ;
        break;
        case 3 : cout << "You won !" ;
        break;
        case 4 : cout << "Try again" ;
        break;
        case 5 : cout << "You won !" ;
        break;
        case 6 : cout << "Try again" ;
        break;
    }
    return 0;
}