#include <iostream>
#include <string>

int main() {
    std::string name;

    // Prompt the user to enter their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Create a friendly greeting
    std::cout << "Hello, " << name << "! It's great to meet you!" << std::endl;

    return 0;
}
