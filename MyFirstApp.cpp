#include <iostream> // iostream means input output stream
using namespace std;

int main()
{ 
    string firstName; // stores the first name of a user
    string surname; // stores the surname of a user

    cout << "Hello There!\n"; // this will output "hello world" to the console.
    cout << "Enter your first name: ";

    cin >> firstName;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Your name is " << firstName << " " << surname << ".";
    return 0;
}