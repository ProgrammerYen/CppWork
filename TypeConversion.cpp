#include <iostream>


int main()
{
    /* 
    Implicit data conversion - automatic
    Explicit data conversion - precede value with new data type in parentheses
    */
    char randomChar = (int) 120.43; 
    // (int) 120.43 is explicit since the new data type precedes the value and is inside a set of brackets.
    // char randomChar is implicit since it converts the value of the int into a char represented by the int.
    std::cout << "Random character: " << randomChar << ".\n";

    int number = 'd'; 
    /* this is an implicit data conversion - the int data type causes the variable to automatically convert the character
     assigned to it to an int. */
     std::cout << "Here is a number: " << number << ".";

    return 0;
}