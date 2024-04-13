#include <iostream>

using namespace std;

class Area {
public:
    // Function to calculate and print the area of a square
    void calculateArea(int side) {
        cout << "Area of square: " << (side * side) << endl;
    }

    // Function to calculate and print the area of a rectangle
    void calculateArea(int length, int breadth) {
        cout << "Area of rectangle: " << (length * breadth) << endl;
    }
};

int main() {
    int side, length, breadth;

    // Input for square side
    cout << "Enter side of square: ";
    cin >> side;

    // Input for rectangle length and breadth
    cout << "Enter length and breadth of rectangle (comma-separated): ";
    cin >> length;
    cin.ignore(); // Ignore the comma
    cin >> breadth;

    // Create an object of the Area class
    Area area;

    // Calculate and print the area of square and rectangle
    area.calculateArea(side); // For square
    area.calculateArea(length, breadth); // For rectangle

    return 0;
}
