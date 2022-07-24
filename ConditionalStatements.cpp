#include <iostream>

int main() {
    // declaring variables which hold personal details
    std::string firstName;
    std::string lastName;
    std::string wholeName;
    int age;

    std::cout << "Sign up for an interview at SmartX for the following job title, junior software engineer.\n";

    std::cout << "\nPlease enter your first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Please enter your last name: ";
    std::getline(std::cin, lastName);

    wholeName = firstName + " " + lastName;

    std::cout << "Please enter your age: ";
    std::cin >> age;


    if (age < 18) {
        std::cout << "\nI'm sorry but you must be 18 years of age or older to apply for this position.";
    }
    else if (age <= 60) {
        std::cout << "\nWe will contact our interviewers to plan an interview for your in the near future.";
    }
    else {
        std::cout << "\nI'm sorry but you are too old to apply for this position.";
    }

}