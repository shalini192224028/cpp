#include <iostream>

using namespace std;

bool isEmpty( int arr[], int size) {
    return size == 0;
}

int main() {
    // Test cases
    int emptyArray[] = {};
    int nonEmptyArray[] = {1, 2, 3};
    
    // Calculate the size of arrays
    int sizeEmptyArray = sizeof(emptyArray) / sizeof(emptyArray[0]);
    int sizeNonEmptyArray = sizeof(nonEmptyArray) / sizeof(nonEmptyArray[0]);

    // Check if arrays are empty
    cout << "isEmpty({}): " << (isEmpty(emptyArray, sizeEmptyArray) ? "true" : "false") << endl;
    cout << "isEmpty({1, 2, 3}): " << (isEmpty(nonEmptyArray, sizeNonEmptyArray) ? "true" : "false") << endl;

    return 0;
}
