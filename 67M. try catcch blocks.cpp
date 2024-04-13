#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        // Example 1: Integer division by zero
        int a = 10, b = 0;
        int result = a / b; // Division by zero
        cout << "Result of division: " << result << endl;

    } catch (int num) {
        // Catch block for integer exceptions
        cerr << "Integer exception caught: " << num << endl;

    } catch (const string& str) {
        // Catch block for string exceptions
        cerr << "String exception caught: " << str << endl;

    } catch (...) {
        // Catch block for any other exceptions
        cerr << "Unknown exception caught." << endl;
    }

    try {
        // Example 2: Accessing out of bounds index in an array
        int arr[5] = {1, 2, 3, 4, 5};
        int index = 10; // Out of bounds index
        cout << "Value at index " << index << ": " << arr[index] << endl;

    } catch (int num) {
        // Catch block for integer exceptions
        cerr << "Integer exception caught: " << num << endl;

    } catch (const string& str) {
        // Catch block for string exceptions
        cerr << "String exception caught: " << str << endl;

    } catch (...) {
        // Catch block for any other exceptions
        cerr << "Unknown exception caught." << endl;
    }

    return 0;
}
