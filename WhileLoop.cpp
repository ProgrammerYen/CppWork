#include <iostream>

int number = 14; // initialising variable number, of type int.
int userGuess; // declaring variable userGuess, of type int.

void promptNumberGuess() {
    std::cout << "Please choose a number between 1 and 100: ";
    std::cin >> userGuess;
}

int main() {
    int initialDifference; // declaring variable initialDifference.
    int finalDifference; // declaring variable finalDifference.
    std::cout << "Welcome to the Guess The Number Game\n\n";
    promptNumberGuess();
    if (userGuess != number) {
        std::cout << "\nSorry, that was incorrect.\n\n";
    }
    while (userGuess != number) {
        initialDifference = abs(number - userGuess);
        promptNumberGuess();
        finalDifference = abs(number - userGuess);
        if (finalDifference > initialDifference) {
            std::cout << "\nColder\n\n";
        }
        else if (finalDifference < initialDifference) {
            std::cout << "\nHotter\n\n";
        }
        else {
            std::cout << "\nSame temp\n\n";
        }
    }
    std::cout << "\nYou have guessed correctly, the answer is " << number << "!";
}