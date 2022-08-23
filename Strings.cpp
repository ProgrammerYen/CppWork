#include <iostream>

typedef std::string str_t;
int main() {
    str_t string1; // declares variable string1
    char randomLetter; // declares variable randomLetter

    std::cout << "Please enter a string: ";
    std::getline(std::cin, string1);
    std::cout << "Please enter a random letter: ";
    std::cin >> randomLetter;

    string1.push_back(randomLetter);

    std::cout << "The first string has transformed into:\n\"" << string1 << "\".";  
    return 0;
}       