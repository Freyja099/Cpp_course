// * Search an array for an element 

#include <iostream>

using namespace std;

int searchIndex(int array[] , int size , int element );
void sortArray(int array[] , int size);

int main()
{
    int array[]={ 1 , 3 , 5 , 4 , 6 , 8 };
    int size = sizeof(array)/sizeof(array[0]);
    int NumElement;
    cout << " Enter the number you are looking for : " ;
    cin >> NumElement;
    cout << endl;

    int index = searchIndex(array , size , NumElement );

    if (index != -1)
    {
        cout << " The number "<< NumElement << " has an index of " << index << endl;
    }

    else 
    cout << " Element does not exist in the array .";

    // * Sorting the array
    sortArray(array , size);
    // * To print the new array I'll be using foreach loop

    for ( int a : array)
    {
        cout << a << " ";
    }    

    return 0;
}

int searchIndex(int array[] , int size , int element )
{
    for (int i = 0 ; i < size ; i++)
    {
        if ( array[i] == element )
        {
            return i;
        }
    }
    return -1;
}
// * return -1 serves as a sentinel value 


// * Sort an array

// * the idea is to take the first element compare it with the second one and if it was bigger we switch them using a temp variable 


void sortArray(int array[] , int size)
{
    int temp;
    for (int i = 0 ; i < size - 1 ; i++)
    // * We use here i < size - 1 because we don't need to compare the last element to anything the larger value will naturally gravitate towards the end of the array 

    {
        for (int j = 0 ; j < size - i - 1 ; j++)
        // * We use here j < size - i - 1 because once we place the larger value at the end of the array they should already be in order

        if (array[j] > array [j+1]) // * this is in ascending order if we want descending order use < 
        // * using if statement to check if the element on the left is greater than the element on the right
        {
        temp = array[j];
        array[j] = array[j+1];
        array [j+1] = temp;
        }
    }
}