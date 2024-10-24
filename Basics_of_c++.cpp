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

/*
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
*/
// TODO : end of exercise

// * Constants

// * Now if we don't want the variable to change this is where we use constants
// * we just have to type const before declaring the variable: const int a = 2;
// * Now even if we want to change the value of a it won't be possible

// * Naming conventions :

// * - Snake case : is when we name our variables using lowercase letters to name
// * and if we have multiple words we seperate them with _ ; e.g : file_size
// * - Pascal case : we should capitalize the first letter of every word ; e.g : FileSize
// * - Camel case : it's like Pascal case but the first letter of the first word should be
// * lowercase ; e.g : fileSize
// * - Hungarian notation : (it's a bit old) We should prefix the name of our variables
// * with a letter that specify their type and the rest of the word should be written just
// * like in Pascal case ; e.g : iFileSize (i stands for int)

// * Mathematical Expressions :

// * Sum : if we want to add a number to our variable we can use multiple ways such as variable += 1 / variable + 1 
// * same for subtraction : variable -= 1 / variable - 1
// * multiplication : variable *=2 / variable * 2
// * division : variable /= 2 or variable / 2
// * About the division : if we had two integer and we defined the quotient as integer the
// * result will be just the integer part , to show the integer and decimal part we should
// * change the nature of the quotient to double and change one of the integer to double
// * the increment operator : x = x + 1;    =>     x++;
// * the decrement operator : x = x - 1;    =>     x--;
// * - the difference between x++ and ++x (resp x-- and --x) :
// * if for example x = 10; and y = x++ ; the current value of x which is 10 will be assigned
// * to y then x will be incremented by one =>   y = 10 & x = 11
// * now if we we had y = ++x ; the value of x will be incremented by one first and then the
// * result will be stored in y             =>    x = 11 & y = 11

// * Order of operators
// * when doing multiplication with division use ()

// * Outputs to the console

// * cout is an object that represents the standard output stream, a stream in programming represents a sequence of character
// * and the standard output is our console or terminal window; for the double bracket << it's called
// * the stream insertion operator ; for the "" it's called string

// TODO : Exercise : Sales = 95,000 $ , state tax = 4% , country tax = 2%

/*

int main()
{
    const double sales = 95000;
    cout << "Sales : $ " << sales << endl
         << "Total Tax : $ " << (sales * 0.04) + (sales * 0.02) << endl
         << "Total Sales : $ " << sales - (sales * 0.04) + (sales * 0.02) << endl;
         return 0;

}
*/

// * cin is an object that represents the standard input stream, we cann use it for reading data from the console, cin is used with
// * a stream extraction operator >> ; cin >> variable ;
// * if we declare a decimal as an integer and we want to read it only the integer part will show

// TODO : Exercise : convert a temperature from fahrenheit to celsius
/*
int main ()
{
    double fahrenheit;
    cout << "Enter the temperature in fahrenheit : " << endl;
    cin >>  fahrenheit;
    cout << " The temperature   " << fahrenheit << " °F   in celsius is : " << ( fahrenheit - 32) * (5.0 / 9.0 ) << " °C "<< endl;
    return  0;

}

*/

// ! for division like 5/9 use 5.0 / 9.0 because both 5 and 9 are integer the result will be an integer too which is 0

// * cmath library 

// TODO : Exercise : write a program to calculate the area of circle

#define _USE_MATH_DEFINES  //* using this line to use pi
#include <cmath>

/*
int main()
{
    float r ,A;
    cout << " Enter the radius : " <<endl;
    cin >> r;
    A =   M_PI * pow(r,2);
    cout << " The area of the circle is : " << A ;
    return 0;
}
*/



// * Part 2 : https://www.youtube.com/watch?v=-TkoO8Z07hI

// * integer is a whole number 
// * doule is a number including a decimal
// * char store a single character
// * boolean has only 2 states : true or false
// * string is an object that represents a sequence of text ; to declare a string : string variable = " ... ";
// * in string we have to add a prefix std::string

// * The const keyword specifies that a variable's value is constant tells the compiler to prevent anything from modifying it 

// * namespace = provides a solution for preventing name conflicts in large projects
// * each entity needs a unique name 
// * e.g :using a function outside the main 
// * namespace first { int x = 1; } ; 
// * namespace second { int x = 2;} ;
// * in the main function when we want to call the variable we will add a prefix e.g :
// * cout << first::variable; ( or cout << second::variable;)
// * or we could add a line insid the main : using namespace first; (or second)
// * we can use that for string too : using std::string;

// ** typedef and typealiases:
// * typedef = reserved keyword used to create an additional name (alias)
// * for another data type , new identifier for an existing type, helps with readability and reduces typos 
// * it's commonly used when there's a long or complicated data type 
// * e.g : typedef std::vector<std::pair<std::string ,int>> pairlist_t ; the new name we will be using is pairlist_t 
// * another way is to use the ' using ' keyword ; e.g : using pairlist_t = std::vector<std::pair<std::string ,int>> 



// * Some useful math related functions :

// * max ( , ) , min( , ) can be used without calling the cmath library
// * pow(,) power ; sqrt() square root ; abs() absolute value ; round() round like for 3.14 will be 3;
// * ceil() is like round up for e.g 3.14 will be 4 ; floor() is like round down for e.g 3.99 will be 3

// * Calculating the hypotenus of a right triangle : 

/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a = 0, b = 0 ; 
    double c ;
    cout << " Enter a : "<<a ;
    cin>> a;
    cout << "Enter b :"<<b;
    cin>>b;
    a = pow(a,2);
    b = pow (b,2);
    c = sqrt (a + b);
    cout << c ;
    return 0;

}
*/
