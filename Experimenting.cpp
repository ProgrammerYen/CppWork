#include <iostream>

int main() {
    // displaying a simple output
    std::cout << "Yo" << std::endl;
    std::cout << "What's up my g?" << std::endl;

    int num1; // declaring variable num1
    int num2; // declaring variable num2
    int quotient; // declaring variable quotient which stores the result of num1 / num2

    // prompting user for two random numbers
    std::cout << "Enter a random number: ";
    std::cin >> num1; // assigning the user's input to num1

    std::cout << "Enter another random number: ";
    std::cin >> num2; // assigning the user's input to num2

    quotient = num1 / num2;

    std::cout << "\n" << num1 << " divided by " << num2 << " is " << quotient << ".";

    return 0;
}