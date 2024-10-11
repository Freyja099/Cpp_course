// * Part 2 of 

// * Fundamental Data types:
// * To declare a variable we have to specify its type, C++ is called a statically-typed language which means when declaring a variable 
// * we have to specify its type and it can be changed throughout the lifetime of the program 
// * - some examples of statically-typed: C++,C# and Java ; for Dynamically-typed : python,javascript,ruby
// * for the types mostly we going to use for integers : short or int ; for floating point numbers : double or float ;
// * most of the time double especially for storing monetary values because the flow type can result in loss of accuracy


// * Initializing variables :
// * When working with float values always type an F at the end e.g : float y = 4.56F ; if we don't write the F at the end by default 
// * the compiler will treat the number as a double and then it will try to store a double inside a float variable which can cause data loss
// * for long we should add an L at the end, otherwise the compiler will treat the number as an integer 
// ! uppercase or capital L and F doesn't matter both works perfectly

// * if we don't want to type the variable type we can use auto e;g :
// * auto letter ='a '; instead of char letter ='a' ; 

// * another way to initialize variable is by using braces e.g: int number {1}
// * this way if we type a variable that doesn't match the type the code won't be compiled unless we correct it, also if we used just {} the 
// * variable will be equal to 0 instead of garbage value; 

// * To represent a variable in binary we can add 0F before the binary number 
// * for hexadecimal we add a prefix 0x 
// * e.g : 255 is 11111111 in binary format and FF in hexadecimal format
// * int n = 0F11111111 ; int n = 0xFF;

// * using unsigned means that the variable can only hold non-negative values 

// * ----------------------------------------------------------------
// * Narrowing :
// * it happens when the variable is initialized of a smaller type using a larger type

// * -----------------------------------------------------------------

// * Generating random numbers: 
// * the function rand is defined in the library <cstdlib> 
// * we have to call another function called srand which stands for seed rand 
// * we have to use also a function time that exist in the library <ctime> the argument for this function is nullptr but we can use 0
// * time(0) ; to specify the upper limit for the number we want to get we can add to rand() % max ;
// * the function will start from 0 if we want that the max = 6 , the numbers we will get are between 0 and 5 
// * we have to add 1 if we want to start from 1 and the max = 6 
// * we can put the function time(0) inside srand directly instead of creating another variable

// TODO : Rolling a dice

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number1;
    int number2;
    double t = time(0);
    srand(t);
    number1 = 1 + rand() % 6;
    number2 = 1 + rand() % 6;
    cout << "The number rolled is: " << number1 << "   and   " << number2 << endl;
    return 0;
}



//* In order to generate a random number in cpp we're going to use a function called rand() which is accessible through
//* the c-stead lib library #include <cstdlib>, the rand function is going to return an integer when you call it, 
//* that number can vary from system to system but on any standard implementation to be some number from zero to at least 
//* 32767. However there are some issues, let's say if we called ran function 5 times it will generate 5 random numbers but 
//* we run the program multiple times the rand function is going to generate the same 5 numbers over and over again. This is
//* because the rand is actually a "pseudorandom number generator that follows an algorithm for generating a sequence of numbers
//* whose properties approximate the properties of sequences of random numbers; The generated sequence is not truly random because
//* it is completely determined by an initial value called the seed"
//* if we want to be able to generate different numbers we need to be able to change that seed value and we'll do that by using
//* a function named srand() which is also defined in #include <cstdlib>, this function takes as an argument in integer and that
//* integer determines the sequence of numbers that rand can pull from, still this doesn't solve the problem because I'll we have
//* done is change the default seed value to something else if we run the program over and over again with this new seed value we'll 
//* going to see that it generates the new set of numbers over and over again one solution to this problem is to use the system clock
//* to generate a seed value so that each time we run the program we'll get a new seed value to do so we can access the system time 
//* using the time function now the time returns an integer representation of the current time on your computer which we can pass as 
//* an argument; to access the time we have to include the c time library #include <ctime> 
//* here's an example : int t = time(0);     srand(t);       cout<<rand();


//! rand has no parameter, srand takes an usigned integer as the seed to ensure randomness across different runs we should seed it with 
//! a value that changes commonly done using time(0)
//! for time the parameter is optional but usually we use time(0) or time(NULL) to tell the time function that we don't care about storing
//! the time anywhere just return the current time in seconds as a simple integer 

//* To simulate rolling a die we have to use modulus to generate a number one through six at random 
//* the modulus is going to give us the remaindr of integer division, so when we divide any number by 6 there's only six possible remainders
//* from zero to five since we need that six and we don't need 0, that's why we have to add 1 
