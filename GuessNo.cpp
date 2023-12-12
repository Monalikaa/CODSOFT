#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() 
{
    int myNum, userNum;
    srand(time(NULL));
    myNum = rand() % 100+1;
    cout << "\n\t--------------------------Welcome to the Number Guessing Game------------------------------\n" << endl;
    cout << "\n\t--You have to guess a number between 1 to 100.";
    cout << "\n\t--Let's start playing and Best Of Luck\n\n" << endl;

    while (true) 
    {
        cout <<"\tEnter the number you want to Guess: ";
        cin >> userNum;

        if (myNum == userNum) 
        {
            cout << "\n\tCongratulations!! You have successfully guessed the right number.\n";
            cout << "\tThanks for playing. Have a nice day!!";
            break;
        } 
        else if (myNum > userNum)
         {
            cout << "\tThe Number is greater than " << userNum << ". Try Again!\n\n";
        }
         else
          {
            cout << "\tThe Number is smaller than " << userNum << ". Try Again!\n\n";
        }
    }
    return 0;
}
