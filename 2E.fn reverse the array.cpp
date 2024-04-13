#include <iostream>
using namespace std;

void Reverse(int A[], int n) {
    for (int i = 0; i < n / 2; i++) {
        // Swap A[i] with A[n-i-1]
        int temp = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = temp;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Input array: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "}\n";

    Reverse(arr, n);

    cout << "Output array after reversing: {";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "}\n";

    return 0;
}
