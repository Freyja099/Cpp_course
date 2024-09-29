// * Session 2 : Basics of C++

// * In programming we use variables to temporarily store data in the computer's memory
// * Technically a variable is the name of a location in memory where we can store some value
// * and because the location can change we refer to this location as a variable

// * to declare a variable in c++ first we have to specify the type of data we want to store 
// * we can always initial our value in the same line we declare it to make our code shorter
// * e.g : int x=20; instead of int x ; x=20; it's not wrong but it's better to read 

// * it's always better to initialize our variable before using them to not get weird values that 
// * we call garbage values which is the data that is in memory 
// * in languages like C# or java we don't have to do this because it automatically gets initialized to 0

// * we can declare multiple variable on the same line e.g : int x=9 , y=3; but it's better to 
// * declare each variable on a seperate line 

// TODO : Exercise : Write code to swap the value of two variables

#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int y = 3;
    int temp = 0;
    temp=x;
    x=y;
    y=temp;
    cout << x << endl;
    cout << y << endl;

    return 0;
}

// TODO : end of exercise

// * Now if we don't want the variable to change this is where we use constants
// * 
