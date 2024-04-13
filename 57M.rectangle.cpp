#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle() : length(0), breadth(0) {}
    Rectangle(int l, int b) : length(l), breadth(b) {}
    Rectangle(int side) : length(side), breadth(side) {}

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

int main() {
    // Test Cases
    Rectangle rect1; // No parameters
    Rectangle rect2(3); // One parameter
    Rectangle rect3(3, 3); // Two parameters

    // Print areas
    cout << "Area: " << rect1.area() << endl;
    cout << "Area: " << rect2.area() << endl;
    cout << "Area: " << rect3.area() << endl;

    return 0;
}
