// * Session 13 : Pointers 


// * Memory addresses
// * A memory address is a location in memory where data is stored 
// * It can be accessed with & (address-of-operator)

// * Pointers = variable tha stores a memory address of another variable

// * & address of operator
// * dereference operator

#include <iostream>
using namespace std;

int main()
{
    string name = " Lee ";
    string *ptrName = &name;

    cout << *ptrName <<endl; // * this is the value to the address
    cout << ptrName << endl; // * this is the memory address

    string Name[5] = { " Name1 " , " Name2 " , " Name3 " , " Name " , " Name "  };
    string *pName = Name;
    cout << Name <<endl; // * this is the memory address
    cout << pName << endl; // * this is also the memory address
    cout << *pName <<endl; // * this will display the first element of the array

    return 0;
}