#include <iostream>
using namespace std; 

// std means standard 
// cout means character output
// std::cout << means standard character output

int main()
{
    string text; // declares string variable text
    int lengthOfText; // declares integer variable lengthOfText

    cout << "Enter some random text: ";
    cin >> text; // assigns the user input to the text variable

    lengthOfText = text.length();

    cout << "\nYou entered the following string, " << text << ".\nThe length of the text your entered is ";
    cout << lengthOfText << ".\n";
    return 0;
}