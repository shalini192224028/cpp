#include <iostream>

using namespace std;

class Shape {
public:
    // Pure virtual function to calculate area
    virtual float area() = 0;
};

class Square : public Shape {
private:
    float length;

public:
    // Constructor
    Square(float l) : length(l) {}

    // Implementation of pure virtual function
    float area() override {
        return length * length;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    // Constructor
    Circle(float r) : radius(r) {}

    // Implementation of pure virtual function
    float area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    float radius, length;

    // Input radius of the circle
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Input length of the square
    cout << "Enter the length of the square: ";
    cin >> length;

    // Create objects of Square and Circle classes
    Square square(length);
    Circle circle(radius);

    // Calculate and output the areas
    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;

    return 0;
}
