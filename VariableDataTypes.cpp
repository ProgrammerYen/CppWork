#include <iostream>
using namespace std;

int main()
{
    // Int (whole numbers)
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "\nIn ten years time your will be " << age + 10 << ".\n\n";

    // Float (decimal number - high precision)
    float priceOfMilk = 3.9999;
    cout << "The price of the milk is £" << priceOfMilk << ".\n";

    // Double (decimal number - less precision)
    double lowPrecisionDecimal = 12.465;
    cout << "Here is a decimal with little decimal places, " << lowPrecisionDecimal << ".\n";

    // Char (single character text)
    char grade = 'A'; // single quotes are only used (not double quotes)
    cout << "You received an " << grade << " for your recent test." << "\n";

    // String (text with more than one character)
    string firstName = "Yenula"; // double quotes are only used (not single quotes)
    string surname = "De Alwis";
    string fullName = firstName + surname;
    cout << "Your entire name is " << fullName << ".\n";

    // Bool (True of False)
    bool ageIs12 = true;
    cout << "Here's a statement:\nI am twelve years old. True/False\nAnswer: " << ageIs12 << "\n1=true\n";
    
    return 0;    
}