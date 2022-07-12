#include <iostream>

int main() 
{
    int num1; // stores the first number
    int num2; // stores the second number
    int sum; // stores the sum of the first and second number

    std::cout<<"Please enter two numbers spearated by a space: ";
    std::cin>>num1>>num2;
    
    sum = num1 + num2;
    std::cout<<num1<<" + "<<num2<<" = "<<sum;
    return 0;
}