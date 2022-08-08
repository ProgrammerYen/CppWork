#include <iostream>

int main() {
    int days; // declares variable days
    int weeks; // declares variable weeks
    int remainingDays; // declares variable remainingDays

    // prompts the user for the number of days they have travelled.
    std::cout << "Please enter the number of days your have travelled:" << std::endl;
    std::cin >> days; // assigns user's input to the variable days.

    /* computes the number of weeks and remaining days which is equivalent to the total number 
    of days the user has travelled.
    */
    weeks = days / 7;
    remainingDays = days % 7;

    // displays the output
    std::cout << days << " days is " << weeks << " weeks and " << remainingDays << " days."; 

    return 0;
}