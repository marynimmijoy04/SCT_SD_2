#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 10 + 1; // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "=================================\n";
    cout << "     NUMBER GUESSING GAME\n";
    cout << "=================================\n";
    cout << "I have chosen a number between 1 and 10.\n";
    cout << "Try to guess it!\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        }
        else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "\nCongratulations! You guessed the number.\n";
            cout << "Number: " << randomNumber << endl;
            cout << "Attempts: " << attempts << endl;
        }

    } while (guess != randomNumber);

    return 0;
}