#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SPEED_OF_LIGHT = 299792458;
    double mass; // declares variable mass
    double energy; // declares variable energy
    cout << "I will find the amount of energy in a given object.\n";
    cout << "Please enter the mass of the object (kg): ";
    cin >> mass;

    energy = mass * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
    cout << "\nThe object has " << setprecision(20) << energy << " joules of energy.";

    return 0;
}