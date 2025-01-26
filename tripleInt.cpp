#include <iostream>

int main() {
    int number;

    // Prompt the user for an integer
    std::cout << "Please enter an integer: ";
    std::cin >> number;

    // Triple the number
    int tripledNumber = number * 3;

    // Output the result
    std::cout << "The tripled value is: " << tripledNumber << std::endl;

    return 0;
}
