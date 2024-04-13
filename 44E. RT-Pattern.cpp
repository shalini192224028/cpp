#include <iostream>
using namespace std;

int main() {
    int rows;

    // Prompt the user to enter the number of rows
    cout << "Number of rows: ";
    cin >> rows;

    // Check if input is valid
    if (rows <= 0) {
        cout << "Invalid input" << endl;

    }

    int  value = 2;

    // Outer loop for rows
    for (int i = 0; i < rows; ++i) {
        cout << value;

        // Print spaces after the value
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }

        // Print additional values for the row
        for (int k = 1; k <= i; ++k) {
           cout << value;

            // Print spaces after the value
            for (int l = 0; l < i; ++l) {
                cout << " ";
            }
        }

        // Move to the next row
        cout << endl;

        // Update the value for the next row
        value *= value;
    }

}

