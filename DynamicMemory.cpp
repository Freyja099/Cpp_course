//  * Session 14 : Dynamic Memory :

// * Dynamic Memory : memory that is allocated after the program is already compiled & running 
// * Use the 'new' operator to allocate memory in the heap rather than the stack

// * Useful when we don't know how much memory we will need 
// * Makes our programs more flexible especially when accepting user input 

// * Whenever we use the new operator we should use the delete operator in the end of program 

// * syntax : variable = new type ;

#include <iostream>
using namespace std;

int main() 
{
    char *ptr1 = NULL ;
    int size ;

    cout << "Enter the size of the array : ";
    cin >> size ;

    ptr1 = new char[size];

    for (int i = 0 ; i < size ; i++ )
    {
        cout << " Enter grade " << i+1 << endl;
        cin >> ptr1[i];
    }

    for (int i = 0 ; i < size ; i++)
    {
        cout << " Grade " << i+1 << " : " << ptr1[i] << endl;
    }

    delete[] ptr1;

    cout <<" the pointer is now : "<< *ptr1 <<endl;
    return 0;
}