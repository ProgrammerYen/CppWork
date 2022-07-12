#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float height; // declares height variable
    float topLength; // declares topLength variable
    float bottomLength; // declares bottomLength variable
    float area; // delcares the area variable

    cout << "This program will compute the area of a trapzium." <<endl; // message to the user

    cout << "Please enter the perpendicular height (cm): "; // prompts user for the height of the trapezium
    cin >> height;

    cout << "Please enter the length of the top line in the pair of parallel lines (cm): "; /* prompts user for the length of the top
    line in the parallel pair of lines in the trapzium*/
    cin >> topLength;

    cout << "Please enter the length of the bottom line in the pair of parallel lines (cm): "; /* prompts user for the length of the
    bottom line in the parallel pair of lines in the trapzium*/
    cin >> bottomLength;
    
    area = 0.5 * (topLength + bottomLength) * height; // computes area of trapzium - 1/2(a + b) * h
    cout << "\nThe final area is " << setprecision(12) << area;

    return 0;
}