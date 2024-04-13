#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Custom comparator function
bool customSort(int a, int b, const unordered_map<int, int>& indexMap) {
    if (indexMap.find(a) != indexMap.end() && indexMap.find(b) != indexMap.end()) {
        return indexMap.at(a) < indexMap.at(b);
    } else if (indexMap.find(a) != indexMap.end()) {
        return true; // a is in A2, so it should come before b
    } else if (indexMap.find(b) != indexMap.end()) {
        return false; // b is in A2, so it should come before a
    } else {
        return a < b; // Both a and b are not in A2, so sort them normally
    }
}

vector<int> customSortA1(vector<int>& A1, const vector<int>& A2) {
    unordered_map<int, int> indexMap; // Map to store the index of elements in A2

    // Populate indexMap with indices of elements in A2
    for (int i = 0; i < A2.size(); ++i) {
        indexMap[A2[i]] = i;
    }

    // Custom sort A1 based on A2
    sort(A1.begin(), A1.end(), [&](int a, int b) {
        return customSort(a, b, indexMap);
    });

    return A1;
}

int main() {
    vector<int> A1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    vector<int> A2 = {2, 1, 8, 3};

    cout << "Sorted A1: ";
    vector<int> sortedA1 = customSortA1(A1, A2);
    for (int num : sortedA1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
