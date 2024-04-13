#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    // Constructor with default argument
    Student(string n = "Unknown") : name(n) {}

    // Method to get the name of the student
    string getName() {
        return name;
    }
};

int main() {
    // Create instances of the Student class with different names
    Student student1; // No name passed, default name "Unknown" will be set
    Student student2("John"); // Name "John" passed

    // Print the names of the students
    cout << "Student 1: " << student1.getName() << endl;
    cout << "Student 2: " << student2.getName() << endl;
  
    return 0;
}
