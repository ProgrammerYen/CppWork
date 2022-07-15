#include <iostream>

int main()
{
    int totalMarks = 75; // the total number of marks in an exam.
    int studentMark; // declares variable studentMark which will store the mark a student receives.
    float percentage; // the percentage the student receives.
    std::string firstName; // stores the first name of a student.
    std::string lastName; // stores the last name of the student.
    std::string wholeName; // stores the entire name of the student - the first name and last name.
    
    std::cout << "Please enter your first name: "; // prompts the user for their first name.
    std::getline(std::cin, firstName);

    std::cout << "\nPlease enter your last name: "; // prompts the user for their last name.
    std::getline(std::cin, lastName);

    wholeName = firstName + " " + lastName;

    // prompts the user for their exam result.
    std::cout << "Please enter the score you received for your recent maths exam (out of 75): ";
    std::cin >> studentMark;

    percentage = (studentMark / totalMarks) * 100; // computes the percentage which the student receives.
    std::cout << "\nYenula De Alwis percentage: " << percentage;

    return 0;
}