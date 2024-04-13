#include <iostream>
using namespace std;
int main() {
 int arr[2][3] = {
 {24, 16, 14},
 {19, 5, 46}
 };
 int sum = 0;
 for (int i = 0; i < 2; ++i) {
 for (int j = 0; j < 3; ++j) {
 if (arr[i][j] % 10 == 4)
{
 sum += arr[i][j];
 }
 } 
 }
 cout << "Sum of values ending with 4: " << sum <<endl;
 return 0;
} 
