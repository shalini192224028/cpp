#include <iostream>

using namespace std;

class Shape {
public:
    // Default constructor
    Shape() {}

    // Constructor for Circle
    Shape(double radius) {
        area = 3.14 * radius * radius;
    }

    // Constructor for Rectangle
    Shape(double length, double width) {
        area = length * width;
    }

    // Constructor for Triangle
    Shape(double side1, double side2, double side3) {
        // Using Heron's formula to find the area of a triangle without sqrt
        double s = (side1 + side2 + side3) / 2;
        area = s * (s - side1) * (s - side2) * (s - side3);
    }

    // Display the area
    void displayArea() const {
        cout << "Area: " << area << endl;
    }

private:
    double area;
};

int main() {
    // Calculate and display the area of a Circle
    Shape circle(5.0);
    cout << "Circle:" << endl;
    circle.displayArea();

    // Calculate and display the area of a Rectangle
    Shape rectangle(4.0, 6.0);
    cout << "\nRectangle:" << endl;
    rectangle.displayArea();

    // Calculate and display the area of a Triangle
    Shape triangle(3.0, 4.0, 5.0);
    cout << "\nTriangle:" << endl;
    triangle.displayArea();

    return 0;
}
