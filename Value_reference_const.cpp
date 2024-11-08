// * Session 12 : Pass by Value or pass by reference ; const parameters:

#include <iostream>

using namespace std;

void swap(string x , string y);
void swap2(string &x , string &y);
int main()
{
    string x = "this is x now";
    string y = "this is y now";

    swap(x, y);

    cout << "************************************"<<endl;
    cout << "x after swap : " << x << endl;
    cout << "y after swap : " << y << endl;

    cout << "************************************"<<endl;
    swap2(x, y);

    // * If we display the variables in the function they will be switched
    // * but if we display them outside the function they will still remain the same

    // * That's because normally when we pass a variable to a function we're passing by value, when we invoke the function we're creating copies of the original ones

    // * To solve this problem we need to pass the variable by reference, we should add a prefixt to the parameters & to pass the variable by reference

    return 0;
}

void swap(string x , string y)
{
    string temp;
    temp = x;
    x = y ;
    y = temp;
    cout << "x after swap : " << x << endl;
    cout << "y after swap : " << y << endl;
}

void swap2(string &x , string &y)
{
    string temp;
    temp = x;
    x = y ;
    y = temp;
    cout << "x after swap : " << x << endl;
    cout << "y after swap : " << y << endl;
}


// * ** const parameters 

// * const parameter : parameter that is effectively read-only ; we use the const parameter for couple of reason 
// * code is more secure & conveys intent also it's useful for references and pointers

// * To use a const parameter we have to add const infront of the parameter
