// * Session 4 : Useful string methods

// * length() : returns the length of the string
// * find('') : returns the index of the first occurrence of a substring in a string
// * replace() : replaces all occurrences of a substring in a string
// * empty() : this return a boolean value
// * clear()
// * append("add the string")
// * at(index) : returns the character at a given index
// * insert (index , "string ") : at() + append() : determine where you want to add the string 
// * erase(the first index , the last index) : to erase a portion of a string 


#include <iostream>
using namespace std ;

int main ()
{
    string name;
    cout << "Enter your name : " << endl;
    getline (cin , name);

// * using empty 
    if( name.empty())
    {
    cout << "Enter your name :" << endl;
    getline (cin , name);
    }

// * using length
    while( name.length() > 5)
    {
        cout << " length > 5 ";
    }

// * using append
    name.append(" hh");
    cout << name << endl;

// * using at
    cout <<name.at(2) << endl ;

// * using insert
    name.insert(0," HH ");
    cout << name << endl;

// * using find
    cout << name.find('h') <<endl;
    
// * using clear
    name.clear();
    cout << " hi " << name << " ...";
    
    return 0;
}


// * To know more about it visit https://cplusplus.com/reference/string/string
