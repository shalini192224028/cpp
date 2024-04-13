#include <iostream>
using namespace std;

void generateMultiplicationTable(int num) {
    for (int i = 1; i <= 10; ++i) {
        cout << i << " * " << num << " = " << (i * num) << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number to generate its multiplication table: ";
    cin >> num;

    cout << "Multiplication table for " << num << " is:" << endl;
    generateMultiplicationTable(num);

    return 0;
}
