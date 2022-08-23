#include <iostream>

int main() {
    int integerVar; // declares variable integerVar
    double doubleVar; // declares variable doubleVar
    int divisor1; // declaring variable divisor1
    double divisor2; // declaring variable divisor2

    std::cout << "Please enter a random integer: "; // prompts the user for a random integer
    std::cin >> integerVar; // assigns the user's input to the variable integerVar

    std::cout << "Please enter a random decimal number: "; // prompts the user for a random decimal number
    std::cin >> doubleVar; // assisngs the user's input to the variable doubleVar

    // displaying the original values of integerVar and doubleVar
    std::cout << "\nThe original value of integerVar is " << integerVar << "." << std::endl;
    std::cout << "The original value of doubleVar is " << doubleVar << "." << std::endl;

    // prompts the user for a random divisor which is an int
    std::cout << "\nPlease enter a random divisor which is an integer: ";
    std::cin >> divisor1; // assigns the user's input to divisor1

    // prompts the user for a random divisor which is a decimal
    std::cout << "Please enter another random divisor which is a decimal: ";
    std::cin >> divisor2; // assigns the user's input to divisor2

    integerVar /= divisor1; // dividing integerVar by divisor1
    doubleVar /= divisor2; // dividing doubleVar by divisor2

    std::cout << "\nThe new value of integerVar is " << integerVar << "." << std::endl;
    std::cout << "The new value of doubleVar is " << doubleVar << "." << std::endl;

    return 0;
}