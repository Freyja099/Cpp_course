// * Session 11 :Multidimensional Array : 2D array

// * type ArrayName [][] = {{, ,} ,{, ,}, ....};


#include <iostream>
using namespace std;

int main()
{
    string cars[][3] = { {"Mustang" , "Escape" , "F-150"} 
                        ,{"Corvette" ,"Equinox","Silverado"} ,
                         {"Challenger","Durango" , "Ram 1500"}};

    
    cout << cars[0][0] << endl;
    cout << cars[0][2] << endl;
    cout << cars[1][1] << endl;
    cout << cars[1][2] << endl;
    cout << cars[2][0] << endl;
    cout << cars[2][1] << endl;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }

    cout << " ********************************************** " << endl;
    
    // * Another to do that is by using :
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0 ; j < columns ; j++)
        cout << cars[i][j] << " ";

        cout << endl;
    }
    return 0;
}