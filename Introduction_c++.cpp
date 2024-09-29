// * Session 1 : Introduction to C++ :https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh

// * Applications of C++ : 
// * high performance applications, Video games, operating systems,..

// * Every 3years we get a new version of c++, the latest version is cpp23 

// * C++ is one of the fastest and most efficient languages

// * planning : C++ language(the syntax), c++ standard library STL ( collection of prewritten c++ code)

// * To write a c++ programs we use an integrated development environment IDE which is an application that contains 
// * an editor + build & debugging tools like MS visual studio and Clion(purchases after 30 days)

// * C++ is a sensitive language to lowercase and uppercase letters 

// * the main function should return a value mostly we use int which stands for integer, when we run our program the OS 
// * is going to execute this function and the value that this function returns tells the OS if our program terminated successfully or not

// * whites spaces in C++ are often ignored so whether we have one or ten space it doesn't really matter

// * While writing our function we write () where we can specify the parameters of this function, it can have 0 or more parameters
// * inside the braces we can type the code for this function so whatever we type it will be executed

// * We will have to use C++ standard library that provides a bunch of capabilities that we need in almost every application
// * in our case (printf like in c) we write #include <...> in angle brackets we specify the name of the one of the files in the standard library
// * that is <iostream> which is short for input output stream, in this file we have capabilities for printing something on the screen
// * or getting input from the user 

#include <iostream>

int main()
{
    std::cout << "Hello World !"; // * this line is called a statement in C++ because it tells the OS what to do 
    
    // * std that is a short for standard library, this is like a bucket or a container for the features that are currently available to us
    // * (the features we have imported on the top). If we add :: we can see all these features 
    // * cout means character out, using this object we can output one or more characters on the screen 

    return 0; 
    // * zero tells the OS that our program is going to terminate correctly, if we return any other values positive or negative that means our 
    // * program encountered an error  
}