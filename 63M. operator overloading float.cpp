#include <iostream>

using namespace std;

class FLOAT {
private:
    float value;

public:
    // Constructor
    FLOAT(float val) : value(val) {}

    // Overloading addition operator
    FLOAT operator+(const FLOAT& other) {
        return FLOAT(value + other.value);
    }

    // Overloading subtraction operator
    FLOAT operator-(const FLOAT& other) {
        return FLOAT(value - other.value);
    }

    // Overloading multiplication operator
    FLOAT operator*(const FLOAT& other) {
        return FLOAT(value * other.value);
    }

    // Overloading division operator
    FLOAT operator/(const FLOAT& other) {
        if (other.value == 0) {
            cerr << "Error: Division by zero" << endl;
            return FLOAT(0.0);
        }
        return FLOAT(value / other.value);
    }

    // Function to display the value of the object
    void display() {
        cout << value;
    }
};

int main() {
    FLOAT F1(2.5);
    FLOAT F2(1.2);

    // Addition
    cout << "F1 + F2 = ";
    (F1 + F2).display();
    cout << endl;

    // Subtraction
    cout << "F1 - F2 = ";
    (F1 - F2).display();
    cout << endl;

    // Multiplication
    cout << "F1 * F2 = ";
    (F1 * F2).display();
    cout << endl;

    // Division
    cout << "F1 / F2 = ";
    (F1 / F2).display();
    cout << endl;

    return 0;
}
