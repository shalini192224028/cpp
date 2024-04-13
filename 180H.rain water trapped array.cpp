#include <iostream>
#include <vector>
using namespace std;

int trapWater(vector<int>& A) {
    int n = A.size();
    if (n <= 2) return 0; // Cannot trap water with less than 3 bars

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int volume = 0;

    while (left <= right) {
        if (A[left] <= A[right]) {
            if (A[left] >= leftMax)
                leftMax = A[left];
            else
                volume += leftMax - A[left];
            left++;
        } else {
            if (A[right] >= rightMax)
                rightMax = A[right];
            else
                volume += rightMax - A[right];
            right--;
        }
    }

    return volume;
}

int main() {
    vector<int> A = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Total volume of trapped water: " << trapWater(A) << endl;

    return 0;
}
