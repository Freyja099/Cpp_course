// * Quiz Game :

#include <iostream>

using namespace std;
void method2();

int main()
{
    method2();

    int result;
    string Question[]={" 1. What year was c++ invented?" , 
                       " 2. Who invented c++ ?" ,
                       " 3. Who won the 2010 World Cup?" , 
                       " 4. What is the predecessor of C+?" , 
                       " 5. Who is the current Prime Minister of USA?" };

    string options[][5]={ {" A . 1969 " , " B . 1975 " , " C . 1985 " , " D . 1995 " }, // * 1985
                          {" A . Guido Van Rossum " , " B . James Gosling " , " C . Bjarne Stroustrup " , " D . Dennis Ritchie "}, // * Bjarne Stroustrup
                          {" A . France " , " B . Germany " , " C . Spain " , " D . Italy "}, // * Spain
                          {" A . C++ " , " B . C " , " C . Java " , " D . Pascal "}, // * C++
                          {" A . George W. Bush " , " B . Bill Clinton " , " C . Donald Trump " , " D . Kamala Harris "}  // * Donald Trump
                        } ;


    char answer[] = { 'C' , 'C' , 'C' , 'C' ,'C'};
    char answerPlayer[5]={};
   
    int size = sizeof(Question)/sizeof(Question[0]);
    char guess ;
    //guess=  toupper(guess); // * In case the user entered lowercase it will automatically turn into uppercase
    int score = 0;

    cout << "Welcome to the Quiz Game! Answer the following questions correctly to earn points." <<endl;
    for (int i = 0 ; i< size ; i++)
    {
        cout << Question[i] <<endl;
        
        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][j]) ; j++)
        cout << options[i][j] <<" ";
        
        cout << endl;
    }

    for(int i = 0 ; i < sizeof(answerPlayer)/sizeof(answerPlayer[0]) ; i++)
    {
        cout <<" Enter you answer for the #" << i+1 << " question : " ;
        cin >> guess ;
        guess =  toupper(guess);                // ! make sure to mention this line after cin not at the beginning
        answerPlayer[i] = guess;
    }
    
    for (int i = 0; i < 5 ; i++)
    {
        if (answerPlayer[i] == answer[i])
        score++;
        else 
        score = score;
    }

    cout << "Your Score is " << score <<" / 5" ;
    return 0;
}

// * Another way to solve that 
void method2()
{
    string Question[]={" 1. What year was c++ invented?" , 
                       " 2. Who invented c++ ?" ,
                       " 3. Who won the 2010 World Cup?" , 
                       " 4. What is the predecessor of C+?" , 
                       " 5. Who is the current Prime Minister of USA?" };

    string options[][5]={ {" A . 1969 " , " B . 1975 " , " C . 1985 " , " D . 1995 " }, // * 1985
                          {" A . Guido Van Rossum " , " B . James Gosling " , " C . Bjarne Stroustrup " , " D . Dennis Ritchie "}, // * Bjarne Stroustrup
                          {" A . France " , " B . Germany " , " C . Spain " , " D . Italy "}, // * Spain
                          {" A . C++ " , " B . C " , " C . Java " , " D . Pascal "}, // * C++
                          {" A . George W. Bush " , " B . Bill Clinton " , " C . Donald Trump " , " D . Kamala Harris "}  // * Donald Trump
                        } ;


    char answer[] = { 'C' , 'C' , 'C' , 'C' ,'C'};
    // char answerPlayer[5]={};
   
    int size = sizeof(Question)/sizeof(Question[0]);
    char guess ;
    guess = toupper(guess) ;// * In case the user entered lowercase it will automatically turn into uppercase

    int score = 0;

    for (int i = 0; i < sizeof(Question)/sizeof(Question[0]); i++) // * forgot to use size instead of the condition 
    {
        cout << Question[i] <<endl;
        
        for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][j]) ; j++)
        cout << options[i][j] <<" ";
        
        cout << endl;
        
        cout <<" Enter you answer for the #" << i+1 << " question : " ;
        cin >> guess ;
        guess =  toupper(guess);                // ! make sure to mention this line after cin not at the beginning

        if (answer[i] == guess)
        score++;
        else 
        score = score;
    }

    cout << " Your score is " << score << "/ 5 "<<endl;
    
}

// * To get a score in % we can use : 
// * cout << (score/(double)size)*100 << "%" <<endl;