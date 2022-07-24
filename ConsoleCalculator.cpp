#include <iostream>
#include <cmath>

int main() {
    float num1; // declares variable num1 
    float num2; // declares variable num2 
    int operation; /* declares variable operation which will store one of the following values: 1-4, representing the values
     +, -, x, / respectively*/
    float result;

    std::cout << "Welcome to the console calculator program!\n\n";

    // a list of operations which can be used by the user.
    std::cout << "Here is a list of operations\n";
    std::cout << "1 represents addition\n";
    std::cout << "2 represents subtraction\n";
    std::cout << "3 represents multiplication\n";
    std::cout << "4 represents division\n";
    std::cout << "5 represents the first number to the power of the second number.\n\n";

    std::cout << "Please enter a number: ";
    std::cin >> num1; // assigns user input to the variable num1

    std::cout << "Please enter another number: ";
    std::cin >> num2; // assigns user input to the variable num2

    std::cout << "Please enter an operation (1-5): ";
    std::cin >> operation;

    switch(operation) {
        case 1:
            result = num1 + num2;
            break;

        case 2:
            result = num1 - num2;
            break;

        case 3:
            result = num1 * num2;
            break;

        case 4:
            result = num1 / num2;
            break;
            
        case 5:
            result = std::pow(num1, num2);
            break;

        default:
            std::cout << "Please enter a number ranging only from 1-6.";
    }
    std::cout << "The result is " << result << ".";
    return 0;
}