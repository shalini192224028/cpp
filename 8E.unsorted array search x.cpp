#include <iostream>
using namespace std;

int searchElement(const int arr[], int n, int x, int index) {
    // Base case: If index exceeds the array size, return -1 (element not found)
    if (index >= n) {
        return -1;
    }

    // If element is found at the current index, return the index
    if (arr[index] == x) {
        return index;
    }

    // Recursively search for x in the remaining part of the array
    return searchElement(arr, n, x, index + 1);
}

int main() {
    int arr[] = {12, 34, 11, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 11;

    int index = searchElement(arr, n, x, 0);

    if (index != -1) {
        cout << "Element " << x << " is present at index " << index << endl;
    } else {
        cout << "Element " << x << " is not present in the array." << endl;
    }

    return 0;
}
