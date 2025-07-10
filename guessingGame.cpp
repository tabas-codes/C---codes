#include<iostream>
using namespace std;

int main ()
    {
        int secretNum = 10;
        int num;
        int guessCount = 0;
        int guessLimit = 5;
        bool outofGuesses = false;

        for(int guessCount = 0; secretNum != num && !outofGuesses; guessCount++ )
        {
            if(guessCount < guessLimit)
            {cout << "Enter a number:";
            cin >> num;
            if (num != secretNum) {cout << "Try again!" << endl;}
            }
            else {
                outofGuesses = true;
                
            }
        }
        if (outofGuesses)
        {
            cout << "You Lose!" << endl;
        }
        else {
            cout << "You Win!" << endl;
        }
        return 0;
    }
