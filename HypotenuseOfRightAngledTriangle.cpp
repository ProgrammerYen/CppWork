#include <iostream>
#include <cmath>

int main()
{
    float length1; // declaring variable length1 
    float length2; // declaring variable length2
    float hypotenuse; /* declaring variable hypotenuse which is the longest side in a right-angled triangle - calculated by 
    using the Pythagoras theorem ((length1 ^ 2 + length2 ^ 2) ^ 0.5)*/

    std::cout << "This program will find the hypotenuse of a triangle using the Pythagoras theorem.\n\n";
    std::cout <<  "Please enter two lengths (in cm) separated by a space: ";
    std::cin >> length1 >> length2; // assigning user's input to length1 and length2.

    hypotenuse = sqrt(pow(length1, 2) + pow(length2, 2)); // computing the hypotenuse of the triangle.
    std::cout << "\nThe hypotenuse of the triangle is " << hypotenuse << " cm."; // displaying output to the user.
    return 0;
}

