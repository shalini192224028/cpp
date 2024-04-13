#include <iostream>
#include <cmath>

using namespace std;

class BinaryToOctal {
private:
    int binary;

public:
    // Constructor to initialize binary number
    BinaryToOctal(int num) : binary(num) {}

    // Function to convert binary to octal
    int convertToOctal() {
        int octal = 0, decimal = 0, i = 0;
        
        // Convert binary to decimal
        while (binary != 0) {
            decimal += (binary % 10) * pow(2, i);
            ++i;
            binary /= 10;
        }
        
        i = 1;
        
        // Convert decimal to octal
        while (decimal != 0) {
            octal += (decimal % 8) * i;
            decimal /= 8;
            i *= 10;
        }
        
        return octal;
    }
};

int main() {
    int binaryNum;
    
    // Input binary number from the user
    cout << "Enter a binary number: ";
    cin >> binaryNum;
    
    // Create an object of BinaryToOctal class
    BinaryToOctal binToOct(binaryNum);
    
    // Convert binary to octal and output the result
    cout << "Octal equivalent: " << binToOct.convertToOctal() << endl;
    
    return 0;
}
