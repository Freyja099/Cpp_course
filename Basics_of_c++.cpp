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
