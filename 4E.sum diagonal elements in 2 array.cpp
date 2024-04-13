#include <iostream>
using namespace std;
int main() {
 int arr[3][3] = {
 {4, 16, 14},
 {2 , 5, 4},
 {12, 3, 4}
 };
 int sum = 0;
 for (int i = 0; i < 3; i++) {
 sum += arr[i][i]; 
 }
 cout << "Output: " << sum << endl;
 return 0;
} 
