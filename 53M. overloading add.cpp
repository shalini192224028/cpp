#include <iostream>

using namespace std;

class Add {
private:
    int num;

public:
    Add(int n) : num(n) {}

    // Overloading '+' operator to add an integer to an Add object
    Add operator+(int value) {
        int sum = num + value;
        return Add(sum);
    }

    // Getter function to retrieve the value of num
    int getNum() const {
        return num;
    }
};

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Create an Add object with the first number
    Add obj1(num1);

    // Perform addition using operator overloading
    Add result = obj1 + num2;

    // Output the result
    cout << "Result of addition: " << result.getNum() << endl;

    return 0;
}
