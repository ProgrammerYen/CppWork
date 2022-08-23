#include <iostream>

int main() {
    float cost; // declares variable cost
    int quantity; // declares variable quantity
    float productPrice; // declares variable productPrice

    std::cout << "Please enter the price of the product you are buying (£): ";
    std::cin >> productPrice;

    std::cout << "\nPlease enter the quantity of the product you are buying: ";
    std::cin >> quantity;

    cost = quantity * productPrice;

    std::cout << "The total price is " << cost << ".";

    return 0;
}