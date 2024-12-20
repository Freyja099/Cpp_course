// * Session 3 : Conditional Statements

// * If statement : Do something if a condition is true. If not, then don't do it
// * to add other conditions we use : else if() or just else 

// * Switches : alternative to using many "else if" statements compare one values 
// * against matching cases

// * switch ( the variable) {
// *   case condition :
// *    the result we want;
// *     break;
// *   case .......
// *   default: // in case there's no matching cases
// *   ..............;
// *     break;
// *}

// TODO : Calculator program :

#include <iostream>
using namespace std;

int main()
{
    double a , b ;
    double result;
    char operation;
    cout << " Enter the first number : " ;
    cin >> a;
    cout << "the second number : " ;
    cin >> b;
    cout << " What operation do you want (only the symbole) ? " ;
    cin >> operation ;
    switch (operation)
    {
        case '+' :
        result = a + b ;
        break;
        case '-' :
        result = a - b ;
        break;
        case '/' : 
        result = a /b ;
        break;
        case '*' :
        result = a*b;
        break;
        default :
        cout << " Use only the following symbole : + - / *";
        break;
    }

    cout << " The result is : " << result ;
    return 0 ; 
}


// * Ternary operator = replacement to an if / else statement 
// * condition? expression 1 : expression 2;

// * Logical Operator

// * && = Check if two conditions are true 
// * || = Check if at least one of the conditions is true
// * ! = Reverse the logical state of its operand 

// * to check a boolean variable using if we can just write if(boolean){...}
// * to check the opposite we can write if (!boolean)


// TODO : Temperature conversion program

/* 
#include <iostream>
using namespace std;

int main()
{
    double temp;
    char unit;
    while ( unit != 'F' && unit != 'C')
    {
        cout << "Enter the Unit of Temperature ( using F for Fahrenheit or C for Celsius ): ";
        cin >> unit ;
    }
    
    
    cout << " Enter the Temperature " ;
    cin >> temp ;
    ( unit ==  'F' )? temp = (temp - 32) * (5.0/9.0) : temp = ((9.0/5.0) * temp ) + 32 ;

    cout << " The Temperature in °" << unit << " is : " << temp ;
}

*/

// ! when using a division where the denominator > numerator, use .0 to avoid getting 0
