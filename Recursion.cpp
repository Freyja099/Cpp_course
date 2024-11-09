// * Session 15 : Recursion :

// * Recursion : a programming technique where a function invokes itself from within 
// * break a complex concept into a repeatable single steps

// * (iterative vs recursive)

// * advantages = less code and is cleaner ; useful for sorting and searching algorithms

// * disadvantages = uses more memory , slower

#include <iostream>
using namespace std;

// * Using iterative
void walk(int steps)
{
    for (int i = 0 ; i < steps ; i++)
    {
        cout << "you take a step " << endl;
    }
}

// * Using recursion
void walk2(int steps)
{
    if (steps > 0)
    {
        cout << "you take a step " << endl;
        walk2(steps - 1);
    }
}

int factorial(int n)
{
    if ( n > 1)
    return n * factorial(n - 1);
    else 
    return 1;
}

