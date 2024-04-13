#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}

int findIndex(const vector<int>& arr, int x) {
    auto it = find(arr.begin(), arr.end(), x);
    if (it != arr.end()) {
        return distance(arr.begin(), it);
    }
    return -1; // If not found
}

void swapElements(vector<int>& arr, int x, int y) {
    swap(arr[x], arr[y]);
}

void processQueries(const vector<int>& arr, const vector<vector<int>>& queries) {
    vector<int> tempArr = arr; // Create a temporary array to store modified array
    for (const auto& query : queries) {
        int type = query[0];
        if (type == 1) {
            reverseArray(tempArr);
        } else if (type == 2) {
            int x = query[1];
            // Find index in the original array (not reversed)
            int index = findIndex(arr, x);
            // If index is found, adjust for reverse operation
            if (index != -1) {
                cout << tempArr.size() - index - 1 << " ";
            } else {
                cout << -1 << " ";
            }
        } else if (type == 3) {
            int x = query[1], y = query[2];
            // Adjust indices for reverse operation
            swapElements(tempArr, tempArr.size() - x, tempArr.size() - y);
        }
    }
}

int main() {
    int N = 5;
    vector<int> arr = {3, 7, 8, 1, 33};
    int Q = 4;
    vector<vector<int>> queries = {{1}, {2, 8}, {3, 2, 4}, {2, 1}};

    processQueries(arr, queries);

    return 0;
}
