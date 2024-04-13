#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return 0;

    int maxReach = arr[0]; // Maximum index you can reach from the current position
    int steps = arr[0];    // Number of steps you can take from the current position
    int lastJump = arr[0]; // Last index where you took a jump

    int jumps = 1; // Number of jumps required

    for (int i = 1; i < n; ++i) {
        if (i == n - 1) return jumps; // If already reached the end
        maxReach = max(maxReach, i + arr[i]);
        steps--;

        if (steps == 0) {
            jumps++;
            if (i >= maxReach) return -1; // Can't reach the end
            steps = maxReach - i;
        }
    }

    return -1; // If not reached the end
}

int main() {
    vector<int> arr1 = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << "Minimum jumps for arr1: " << minJumps(arr1) << endl;

    return 0;
}
