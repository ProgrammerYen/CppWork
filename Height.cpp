#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // float data type stores a decimal number
    float heightInMetres; // declares variable heightInMetres of data type float.
    float heightInFeet; // declares variable heightInFeet of data type int.
    float heightInIns; // declares variable heightInIns of data type int.

    cout << "Enter your height (m): ";
    cin >> heightInMetres;

    heightInFeet = heightInMetres * 3.281; 
    heightInIns = round((heightInFeet - trunc(heightInFeet)) * 12);

    cout << "\nYou are " << trunc(heightInFeet) << " foot " << heightInIns << " inches."; 
    return 0;
}