#include <iostream>
using namespace std;

void zigZag(int arr[], int n) {
    bool flag = true; // True indicates "<", false indicates ">"
    
    for (int i = 0; i < n - 1; ++i) {
        if (flag) {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        } else {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        flag = !flag; // Toggle flag after each iteration
    }
}

int main() {
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    zigZag(arr, n);

    cout << "Zig-zag array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
