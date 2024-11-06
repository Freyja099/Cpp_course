// * Session 8 : Funtions

// * A function is a block of reusable code

// * To define a function we write the return type, function name, and parameters inside parentheses
// * The return type is optional and can be any data type
// * The parameters are optional and can be any data type
// * To write a function behind main and use it inside main without any problem we have to declare it first that way
// * Return_type Funtion_name (parameters) ;

#include <iostream>
using namespace std;

int sum ( int a , int b );

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int n = 2;

int main()
{
    int n = 1;

    cout << sum(2,2) <<endl;
    cout << sum(5,2) <<endl;
    cout << sum(9,6) <<endl;
    cout << sum(-2,4) <<endl;
    cout << sum(-2,-2) <<endl;

    bakePizza();
    bakePizza("cheese");
    bakePizza("cheese","mushrooms");

    cout << " using a local variable " << n <<endl;
    cout << " using a global variabla " << :: n <<endl;

    return 0;
}

int sum ( int a , int b )
{
    return a + b;
}

// * the return keyword
// *  return = return a value back to the spot where you called the encompassing function


// * Overloaded function
// * It's valid that functions share the same name but we need a different set of parameters : function signature
// * 

void bakePizza()
{
    cout << " Here's your pizza " <<endl;
}

void bakePizza(string topping1)
{
    cout << " Here's your pizza with " << topping1 << " " <<endl;
}

void bakePizza(string topping1, string topping2)
{
    cout << " Here's your pizza with " << topping1 << " and " << topping2 << " " <<endl;
}

// * Variable scope 
// * a function will use any local variable first before resorting to any global variables
// * if we want to use the global version while having a local one we should add :: before the variable in cout 