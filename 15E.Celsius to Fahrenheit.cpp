#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    double celsius;
    
    // Input Celsius value from the user
    cout << "Enter the Celsius value: ";
    cin >> celsius;
    
    // Convert Celsius to Fahrenheit
    double fahrenheit = celsiusToFahrenheit(celsius);
    
    // Output the result
    cout << "Equivalent Fahrenheit value: " << fahrenheit << endl;
    
    return 0;
}
