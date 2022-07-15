#include <iostream>

int main()
{
    int age; // declares variable age
    std::cout << "Please enter your age: "; // prompts the user to enter his/her age
    std::cin >> age; // user input is assigned to variable age

    age++; // increments age
    std::cout << "\nYou have time travelled to the future and you are now " << age << " years old.\n";

    age--; // decrements age
    std::cout << "You have time travelled back to the present day and you are now " << age << " years old.\n";

    age -= 10; // age changes by -10
    std::cout << "Suddenly, you have time travelled 10 years into the past, and you are now " << age << " years old\n";

    return 0;
}