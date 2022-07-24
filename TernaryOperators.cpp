#include <iostream>

int main() {
    /*
    Ternary operators act as an if else selection statement
    This is where there is a condition followed by a question mark and the output if this condition is true. Afterward, a colon and 
    the output if the statement is false is placed after this
    
    Like this: (condition) ? (expression if condition is true) : (expression if condition is false) 
    */

    int age; // declares variable age
    std::string userSignup; // declares variable userSignup checking whether a user will like to sign up for tiktok.
    std::cout << "Welcome to tiktok, would you like to sign up (y/n)? ";
    std::cin >> userSignup; // assigns the user's response to the variable userSignup

    if (userSignup == "y") {
        std::string username; // declares variable username
        int age; // declares variable age

        std::cout << "\nPlease enter your desired username (must be at least 5 characters): "; // prompts user for his/her desired username
        std::cin >> username; // assigns user's response to the variable username

        // selection statements check whether the username is 5 characters long.
        if (username.length() < 5) {
            std::cout << "Invalid response - must be at least 5 characters long";
        }
        else {
            std::cout << "\nPlease enter your age: "; // prompts user for his/her age
            std::cin >> age; // assigns the user's response to the variable age.

            (age >= 13) ? std::cout << "\nYou are now part of the huge tiktok community, welcome!" : 
            std::cout << "\nI am sorry but you must be at least 13 to sign up for tiktok.";
        }


    }
    else if (userSignup == "n") {
        std::cout << "OK, well we hope you sign up for tiktok in the near future!";
    }
    else {
        std::cout << "Invalid response.";
    }

    return 0;
}