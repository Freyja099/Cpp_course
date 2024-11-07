// * Session 10 : Fill( ) : 

// * fill() = Fills a range of elements with a specified value fill (begin , end , value)

#include <iostream>

using namespace std;

int main()
{
    string foods[10];
    fill(foods , foods + 10 , "Pizza");
    for ( string food : foods)
    {
        cout << food << " ";
    }

    cout << endl;

    
    // * Or we can use size for instead of 10

    int Size = 5;

    string username[Size];
    fill (username , username + Size , "USERNAME");

    for ( string ID : username)
    {
        cout << ID << endl;
    }

    // * Another example : 

    int Size2 = 10;
    string name[Size2];
    fill(name , name + (Size2 - 3) , "NAME");
    /*for ( string ID : name)
    {
        cout << ID << endl;
    }*/
    fill(name + (Size2 - 3) , name + Size2 , "NAME2");
    for(string ID : name)
    {
        cout << ID <<endl;
    }
    return 0;
}