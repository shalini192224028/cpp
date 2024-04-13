#include <iostream>
#include <unordered_set>
using namespace std;

bool hasSumPair(const int arr[], int n, int x) {
    unordered_set<int> seen;

    for (int i = 0; i < n; ++i) {
        int complement = x - arr[i];
        if (seen.count(complement)) {
            return true;
        }
        seen.insert(arr[i]);
    }

    return false;
}

int main() {
    // Test cases
    int arr1[] = {0, -1, 2, -3, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int x1 = -2;

    cout << "Test case 1: ";
    hasSumPair(arr1, n1, x1) ? cout << "Yes\n" : cout << "No\n";

    return 0;
}
