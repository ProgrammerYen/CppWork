#include <iostream>
using namespace std;

int main()
{
    // number1 and number2 are floats since the user may enter a decimal number 
    float number1; // declaring the variable number1
    float number2; // declaring the variable number2

    cout << "Hello there! I will find the product of two numbers for you."<<"\n";
    cout << "Enter the first number: ";
    cin >> number1; // assigning number1 to the number entered by the user.

    cout << "Enter the second number: ";
    cin >> number2; // assigning number2 to the second number entered by the user

    float product = abs(number1 * number2); // product of number1 and number2

    cout << "\nNumber 1: " << number1<<"\n";
    cout << "Number 2: " << number2<<"\n";
    cout << "\nThe product of number 1 and number 2 is " << product << ".";

    return 0;
}