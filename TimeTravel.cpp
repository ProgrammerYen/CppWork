#include <iostream>

int main()
{
    int age; // declares variable age
    std::cout << "Please enter your age: ";
    std::cin >> age;

    age++;
    std::cout << "You have time travelled to the future and you are now " << age << " years old.";

    return 0;
}