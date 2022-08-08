#include <iostream>
#include "bits/stdc++.h"

int main() {
    float radius; // declares variable radius
    const float PI = 3.14; // declares variable pi (rounded to 2 d.p.)
    float areaOfCircle; // declares variable areaOfCircle
    
    // prompts the user for the radius of a circle
    std::cout << "Please enter the radius of a circle (cm): " << std::endl;
    std::cin >> radius;

    areaOfCircle = PI * (radius * radius);

    std::cout << "The area of the circle is " << areaOfCircle << "cm.";

}