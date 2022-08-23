#include <iostream>

int main() {
    int i,j; // declaring integer variables, i and j
    bool b1, b2; // declaring boolean variables, b1 and b2

    std::cout << "Please enter two integers separated by a space: ";
    std::cin >> i >> j;

    if (i < j) {
        std::cout << "Variable i is less than j";
    }
    else if (i > j) {
        std::cout << "Variable i is greater than j";
    }
    else {
        std::cout << "Variable i is equal to variable j"
    }

    b1 = true;
    b2 = false;

    std::cout << !(b1 && b2) && (b1 || b2); // true
    std::cout << !((b1 || b2) && !(b1 && b2)); // false
}