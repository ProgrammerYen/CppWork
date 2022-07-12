#include <iostream>
using namespace std;

int main() 
{
    float length; // declares the variable length
    float width; // declares the variable width
    float height; // declares the variable height
    float volumeOfCuboid; // declares the variable volumeOfCuboid which finds the product of length, width and height.

    cout << "Hello there! This program calculates the area of a cuboid."<<endl;
    cout << "Please enter the length (cm): ";
    cin >> length;

    cout << "Please enter the width (cm): ";
    cin >> width;

    cout << "Please enter the height (cm): ";
    cin >> height;

    volumeOfCuboid = length * width * height;
    cout << "\nLength: " << length <<endl;
    cout << "Width: " << width<<endl;
    cout << "Height: " << height<<endl;
    cout << "\nThe final volume of the cuboid is " << length << " x " << width << " x " << height << " which is ";
    cout << volumeOfCuboid << "."<<endl;
}