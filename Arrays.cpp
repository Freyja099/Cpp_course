// * Session 9 : Arrays

// * array : is a data structure that can hold mutltiple values (king of a variable that holds multiple values)
// * Values are accessed by an index number
// * type_of_values ArrayName [] = {elements} or we can set a size and initialize elements later
// * type_of_values Array[size];
// * Array can only contain values of the same data type

// * sizeof() = determines the size in bytes of a : variable , data type , class , objects ,...

// * To display all elements of an array we use an iterator in a for loop array[index] 


// * foreach loop :
// * is a loop that eases the traversal over an iterable data set
// * the syntax is : for (type_of_array GiveName : ArrayName){}
// * the foreach loop is useful if we just want to display the elements


// * Pass array to a function
// * When passing an array to a fuction we only need to put the name of array inside () without [] or {}
// * If we want to display our array using for loop we can use the following syntax :
// * for (int i = first_element ; i < sizeof(array)/sizeof(array[0]) ; i++) 

// * if we want pass through array using a function we have to declare in main function a size of the array using : int size = sizeof(array)/sizeof(array[0]); and the function has to have two parameters the array[] and size like the following example :

#include <iostream>
using namespace std;

double getTotal(double prices[] , int size);

int main()
{
    double prices[] = {1.99 , 2.99 , 3.99 , 4.99 , 5.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices , size);

    cout << "$" << total;
    return 0;
}

double getTotal(double prices[] , int size)
{
    double total = 0;
    for (int i = 0 ;i < size ; i++)
    {
        total += prices[i];
    }

    return total;
}

