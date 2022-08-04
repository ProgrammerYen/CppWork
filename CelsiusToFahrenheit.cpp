#include <iostream>

int main() {
    // the program converts degrees celsius to degrees fahrenheit
    int tempInCelsius; // declaring variable tempInCelsius
    int tempInFahrenheit; // declaring variable tempInFahrenheit

    // prompting the user for a temperature in degrees Celsius
    std::cout << "Please enter a temperature in Celsius: ";
    std::cin >> tempInCelsius; // assigning the user's response to tempInCelsius

    tempInFahrenheit = tempInCelsius * 9 / 5 + 32; // computing the temperature in Fahrenheit
    std::cout << "The temperature in Fahrenheit is " << tempInFahrenheit << "."
}