#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int EXTRA_ELE(int A[], int B[], int N) {
    // Sort both arrays
    sort(A, A + N);
    sort(B, B + N - 1);

    // Compare sorted arrays to find the extra element
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] != B[i])
            return A[i];
    }
    return A[N - 1]; // Last element of A is extra
}

int main() {
    const int maxSize = 100;
    int A[maxSize], B[maxSize];
    int N;

    // Initialize arrays A and B (for demonstration purposes)
    N = 8; // Size of array A
    int elements_A[] = {14, 21, 5, 19, 8, 4, 23, 11}; // Array A
    int elements_B[] = {23, 8, 19, 4, 14, 11, 5};      // Array B

    // Copy elements to arrays A and B
    for (int i = 0; i < N - 1; ++i) {
        A[i] = elements_A[i];
        B[i] = elements_B[i];
    }
    A[N - 1] = elements_A[N - 1]; // Copy the last element of A

    // Find and display the extra element in Array A
    int extraElement = EXTRA_ELE(A, B, N);
    cout << "The extra element in Array A is: " << extraElement << endl;

    return 0;
}
