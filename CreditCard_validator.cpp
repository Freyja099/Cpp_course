// * Credit Card Validator Program : 
// * Luhn Algorithm :
// * 1- Double every second digit from right to left; If doubled number is 2 digits, split them
// * 2- Add all single digits from step 1
// * 3- Add all odd numbered digits from right to left
// * 4- Sum results from steps 2 & 3
// * 5- If step 4 is divisible by 10, # is valid 

// * ex : 6011 0009 9013 9424  
// * first step we are concerned with the second number from RL so this will be : 
// * 6 1   0 0   9 1  9 2 starting from right 
// * then we're going to double the numbers
// * 12 2  0 0  18 2   18 4
// * Since we have some number that contains 2 digits we need to split them 
// * 1 2 2  0 0  1 8 2  1 8 4
// * Next we have to add all numbers together 
// * the sum is 29 
// * Now we'll go back to the original number 6011 0009 9013 9424 and here we are concerned of the odd numbers placement so we'll delete the others
// *  0 1  0 9  0 3  4 4
// * Now we add the digits we got together
// * the sum is 21
// * Then add the two sums together : 29 + 21 = 50 
// * if 50 is divisible by 10 then the number is valid ==> 50 % 10 = valid

#include <iostream>

using namespace std;

// TODO : void step1( vector <int> vector1 );

// * using string

int SumEven(const string cardNum);
int SumOdd (const string cardNum);
int getdigit( const int number);

int main()
{
    string cardNum;
    int result = 0;

    cout << " Enter a credit card num " <<endl;
    getline(cin , cardNum);

    result = SumEven(cardNum) + SumOdd (cardNum);
    if (result % 10 == 0)
    {
        cout << " The credit card number is valid" << endl;
    }
    else 
    cout << " Something wrong happened, please try again later" << endl;

    return 0;
}

int SumEven(const string cardNum)
{
    int sum = 0;

    for (int i = cardNum.size()-2 ; i >= 0 ; i-=2) // * for the .size()-2 ; arrays always start with 0 that's why we subtract 1 and the other one is for the second element    ;     and for i-=2 is because we need every even digit
    {
        sum += getdigit((cardNum[i] - '0')* 2);  // * Subtraction '0' because we are working with a ASCII table to get 1 to 9 we should subtract the whatever the character 0 holds ( 48 in this case )
    }

    return sum;
}

int SumOdd(const string cardNum)
{
    int sum = 0;
    for (int i = cardNum.size() - 1 ; i >= 0 ; i-=2)
    {
        sum += cardNum[i] - '0';
    }

    return sum;
}

// * To split the two numbers 18 = 10 + 8  we have to find a way to let number equal to 8 + 1 = 9 
// * 18 % 10 is 8 and 18 % 10 is 1 since we're using integer division (!double) and finally 1 % 10 is 1 that's how we get 9
int getdigit( const int number)
{
    return number % 10 + (number/10 % 10) ;
}

// TODO with vector 
#include <vector>
void step1( vector <int> vector1 )
{
    // * I'll suppose that the credit card contains 16 digits
    long int number;
    
    cout << "Enter the 16 digits please :" << endl;
    for ( int i = 0 ; i < 16 ; i++)
    {
        cin >> number; // * To read each digit by itself
        vector1.push_back(number);
    }

    for (auto it = vector1.end() ; it != vector1.begin() ; it--)
    {
        if ((it - vector1.begin()) % 2 != 0) // * we can't use if (it % 2 != 0) because it is not an integer, it's an iterator pointing to an element of the vector ; you need to calculate the index from the iterator and then check if that index is odd.
        {
            vector1.erase(it);
        }
    }
    
    for(auto it : vector1)
    {
        cout << it <<" ";
    }

    for (int i = 0; i < sizeof(vector1); i++)
    {
        vector1[i] = vector1[i]*2;
    }

    for(auto it : vector1)
    {
        cout << it <<" ";
    }

} // ! didn't finish that yet

