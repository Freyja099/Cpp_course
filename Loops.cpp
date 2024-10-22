// * Session 5 : Loops 

// * While loops :
// * is much like an if statement except we can repeat a code 
// * potentially an infinite amount of time 


// * Do while loop :
// * Do some block of code first, then repeat again if condition is true
// * It executes the code inside {} once, then checks the condition
// * It's useful in games if we want to run the game once and at the end of
// * the game the user can choose if they would like to play again 


// * For loop :
// * It's a loop that will execute a block of code a specified amount of time 
// * for ( index = start ; stoping condition ; increment or decrement index )


// * break and continue :
// * break = break out of a loop
// * continue = skip current iteration

// * eg : 

#include <iostream>
using namespace std;

int main ()
{
    for (int i = 0 ; i < 20 ; i++)
    {
        if (i == 13)
        continue; // * 13 will be skipped
        if (i == 15)
        break;   // * when we get to 15 the counter will stop and skip the for loop 
        cout << i << endl;
    }

    return 0;
}


// * Nested loop:
// * it's a loop inside another loop 

// TODO : Rectangle using * 

/*

int main()
{
     int rows ;
     int columns ;
     cout << " Enter the number of rows : " ;
     cin >> rows;
     cout << " Enter the number of columns : "; 
     cin >> columns;
    
    for ( int i = 1 ; i <= rows ; i++)
    {
        for ( int j = 1 ; j <= columns ; j++)
            cout << " * " ;
        cout << '\n';

    }
    return 0;
}
*/