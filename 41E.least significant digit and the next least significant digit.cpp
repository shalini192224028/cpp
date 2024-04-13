#include <iostream>

int main() {
    int number;

    // Input an integer
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    // Extract least significant digit
    int leastSignificantDigit = number % 10;

    // Remove least significant digit and extract the next least significant digit
    number /= 10;
    int nextLeastSignificantDigit = number % 10;

    // Output the results
    std::cout << "The least significant digit is " << leastSignificantDigit << std::endl;
    std::cout << "The next least significant digit is " << nextLeastSignificantDigit << std::endl;

    return 0;
}

