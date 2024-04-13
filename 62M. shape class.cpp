#include <iostream>

using namespace std;

// Base class: Shape
class Shape {
public:
    void printInfo() const {
        cout << "This is a shape" << endl;
    }
};

// Subclass 1: Polygon (inherits from Shape)
class Polygon : public Shape {
public:
    // Function overrides the one in the base class
    void printInfo() const {
        cout << "Polygon is a shape" << endl;
    }
};

// Subclass 2: Rectangle (inherits from Polygon)
class Rectangle : public Polygon 
{
public:
    // Function overrides the one in the base class
    void printInfo() const 
	{
        cout << "Rectangle is a polygon" << endl;
    }
};

// Subclass 3: Triangle (inherits from Polygon)
class Triangle : public Polygon {
public:
    // Function overrides the one in the base class
    void printInfo() const {
        cout << "Triangle is a polygon" << endl;
    }
};

// Subclass 4: Square (inherits from Rectangle)
class Square : public Rectangle {
public:
    // Function overrides the one in the base class
    void printInfo() const {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    Shape shapeObj;
    Polygon polygonObj;
    Rectangle rectangleObj;
    Triangle triangleObj;
    Square squareObj;

    cout << "Calling function by the object of each class:" << endl;

    shapeObj.printInfo();
    polygonObj.printInfo();
    rectangleObj.printInfo();
    triangleObj.printInfo();
    squareObj.printInfo();

    return 0;
}
