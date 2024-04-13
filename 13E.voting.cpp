#include <iostream>

int main() {
    int age;
    
    // Input age from the user
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    // Check if the person is eligible to vote
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        // Calculate how many years are left to be eligible
        int years_left = 18 - age;
        std::cout << "You are allowed to vote after " << years_left << " years." << std::endl;
    }
    
    return 0;
}
