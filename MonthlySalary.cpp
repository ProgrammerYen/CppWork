#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float annualSalary; // declares the variable annualSalary
    float monthlySalary; // declares the variable monthly salary which will store annualSalary / 12 i.e. the monthly salary.

    cout << "What is your annual salary (£)? ";
    cin >> annualSalary;

    monthlySalary = annualSalary / 12;

    cout << "Your annual salary is £" << annualSalary << ", therefore, your monthly salary is £" << annualSalary << " / 12 = ";
    cout << monthlySalary << "\n";

    // calculates the amount of money the user has earnt in 20 years.
    cout << "In twenty years time, you would have earnt £" << setprecision(12) << annualSalary * 20 << "." << "\n";

    char char1 = 'Y';
    char char2 = 'e';
    char char3 = 'n';
    char char4 = 'u';
    char char5 = 'l';
    char char6 = 'a';

    cout << "\nMy name is " << char1 << char2 << char3 << char4 << char5 << char6 << ".";
}