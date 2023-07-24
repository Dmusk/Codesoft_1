// Codesoft SIP Task 1
// C++ Programing
// NUMBER GUESSING GAME :-
/* Create a program that generates a random number and asks the
    user to guess it.Provide feedback on whether the guess is too high or
    too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNo = rand() % 100 + 1;

    int guess;
    int tries = 0;

    cout << "-----------------------------------------" << endl;
    cout << "###    Number Guessing Game     ###" << endl;
    cout << "-----------------------------------------" << endl;

    cout << "=> Choose Number between 1 and 100." << endl;

    do
    {
        cout << "Enter your Number To guess : ";
        cin >> guess;
        tries++;

        if (guess == randomNo)
        {
            cout << "Congratulations! You guessed the correct number " << randomNo << " in " << tries << " attempts." << endl;
            break;
        }
        else if (guess < randomNo)
        {
            cout << "Too low. Try again." << endl;
        }
        else
        {
            cout << "Too high. Try again." << endl;
        }
    } while (true);

    return 0;
}
