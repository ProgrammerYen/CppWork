#include <iostream>
typedef std::string str_t;   

int main()
{
    str_t firstName;
    str_t surname;
    str_t wholeName;

    std::cout << "Please enter your first name: ";
    std::cin >> firstName;

    std::cout << "Please enter your surname: ";
    std::cin >> surname;

    wholeName = firstName + " " + surname;

    std::cout << "\nYour whole name is " << wholeName << ".";

    return 0;
}