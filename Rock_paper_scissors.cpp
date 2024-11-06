// * Game Rock paper scissors

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

char computer_rand();
void logic_of_game();

int main()
{
    srand(time(NULL));
    cout << " ***********************ROCK PAPER SCISSORS***********************" <<endl;
    cout << " Instructions : " << "\n"
         << " Rock crushes scissors" << "\n"
         << " Scissors cuts paper" << "\n"
         << " Paper covers rock" << "\n"
         << " The first who gets 3 points win ! " <<endl;
         cout << " ************************************************************" << endl;

    logic_of_game();

    
    return 0;

}

// * Generating a random number to choose from the strings 
char computer_rand()
{
    
    int randomIndex = rand() % 3 ;

    char choice ;
    if (randomIndex == 0)
        choice = 'r';
    
    else if (randomIndex == 1)
        choice = 'p';

    else 
        choice = 's';

return choice;
}

void logic_of_game()
{
    char player_choice ;
    char computer_choice;
    int player_record = 0 , computer_record = 0;

do{

    cout << " Enter r for rock , p for paper and s for scissors" <<endl;
    cin >> player_choice;
    
    computer_choice = computer_rand();

    switch(player_choice)
    {
        case 'r' :
        switch (computer_choice)
        {
            case 'r':
            cout << "It's a tie!" << endl;
            break;
            
            case 's':
            player_record++;
            cout << " player won this round " << endl;
            break;

            case 'p' :  
            computer_record++;
            cout << " computer won this round " << endl;
            break;
        }
        break;

        case 'p':
        switch (computer_choice)
        {
            case 'p':
            cout << "It's a tie!" << endl;
            break;
            
            case 'r':
            player_record++;
            cout << " player won this round " << endl;
            break;

            case 's' :  
            computer_record++;
            cout << " computer won this round " << endl;
            break;
        }
        break;

        case 's' :
        {
            switch (computer_choice)
            {
            case 's':
            cout << "It's a tie!" << endl;
            break;
            
            case 'p':
            player_record++;
            cout << " player won this round " << endl;
            break;

            case 'r' :  
            computer_record++;
            cout << " computer won this round " << endl;
            break;
            }
        }
        break;

        default:
        cout << "Invalid choice! Please enter r , p , s ." << endl;
        continue;
    }

}while (player_record != 3 && computer_record != 3);

     if (player_record == 3)
        cout << " You Won , Congratulations !! " <<endl;

        else
        cout << " Computer Won , Better luck next time! " <<endl;
}

// ! don't use string inside switch statement

// ! Without moving srand(time(NULL)) to main(), computer_rand() will reseed the random generator every time it’s called. Since srand() relies on the system clock, calling it repeatedly within a short period might generate the same random numbers. This could make computer_choice seem repetitive or predictable, especially if the calls to computer_rand() are close together in time.

// ! If an invalid input (anything other than 'r', 'p', or 's') is entered, skipping the score display allows the game to continue normally without confusion. Without continue, the loop will still check the winning condition after invalid input, which might seem odd because no round was played.