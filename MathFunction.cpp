#include <iostream>
#include <cmath>

int main()\
{
    int number1; // declaring variable number1
    int number2; // declaring variable number2
    int number3; // declaring variable number3
    int maxValue; // declaring variable maxVariable which stores the maximum value amongst variab0le number1, number2, and number3
    int minValue; // declaring variable minVariable which stores the minimum value amongst variable number1, number2, and number3
    int exponentiation; // declaring variable exponentiation which stores the value of number1 ^ number2.
    int sqrtOfExponentiation; // declaring variable sqrtOfExponentiation which finds the exponentiation ^ 0.5.

    std::cout << "Please enter three integers under 10 separated by a space: ";
    std::cin >> number1 >> number2 >> number3; // assigning the user input to the number variables.

    // computing the result of the following calculations.
    maxValue = std::max(std::max(number1, number2), number3);
    minValue = std::min(std::min(number1, number2), number3);
    exponentiation = pow(number1, number2);
    sqrtOfExponentiation = round(sqrt(abs(exponentiation)));

    std::cout << "\nThe maximum value amongst these three integers is: " << maxValue;
    std::cout << ".\nThe minimum value amongst these three integers is: " << minValue;
    std::cout << ".\nThe first integer to the power of the second integer " << exponentiation;
    std::cout << ".\nThe square root of the previous calculation is " << sqrtOfExponentiation << " rounded to a whole number.";

    return 0;
}