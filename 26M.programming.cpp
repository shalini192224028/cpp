#include <iostream>
#include <string>
using namespace std;
class Programming {
public:
    // Constructor with default argument
    Programming( string language = "programming languages") {
        std::cout << "I love " << language << std::endl;
    }
};

int main() {
    // Creating objects of the Programming class with different arguments
    Programming obj1;       // Default constructor, prints "I love programming languages"
    Programming obj2("cpp"); // Constructor with argument, prints "I love cpp"

    return 0;
}