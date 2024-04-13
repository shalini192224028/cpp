#include <iostream>

using namespace std;

int main() {
    double taxableIncome, tax = 0;

    // Input the taxable income
    cout << "Enter your Income: ";
    cin >> taxableIncome;

    // Calculate tax based on taxable income
    if (taxableIncome <= 60000) {
        tax = 0;
    } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
        tax = taxableIncome * 0.05;
    } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
        tax = taxableIncome * 0.1;
    } 
	else {
        tax = taxableIncome * 0.15;
    }

    // Display the income tax
    cout << "Your income tax is: " << tax << endl;

    return 0;
}
