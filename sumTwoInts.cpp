#include <iostream>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // Prompt the user to enter the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}
