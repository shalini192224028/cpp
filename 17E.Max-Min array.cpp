#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {14, 16, 87, 36, 25, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int M = 1; // Mth maximum number
    int N = 3; // Nth minimum number

    // Sort the array
    sort(arr, arr + size);

    // Get the Mth maximum number from the end
    int mth_max = arr[size - M];

    // Get the Nth minimum number from the beginning
    int nth_min = arr[N - 1];

    // Calculate sum and difference
    int sum = mth_max + nth_min;
    int diff = mth_max - nth_min;

    // Output the results
    cout << "1st Maximum Number = " << mth_max << endl;
    cout << N << "rd Minimum Number = " << nth_min << endl;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;

    return 0;
}
