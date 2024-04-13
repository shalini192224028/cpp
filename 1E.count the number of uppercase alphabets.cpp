#include <iostream>
#include <cctype>
using namespace std;
int main() {
   string text;
   cout << "Enter a text:";
 getline(cin, text);
 int uppercaseCount = 0;
 for (char c : text) {
 if (isupper(c)) {
 uppercaseCount++;
 }
 }
 cout << "Number ofuppercase letters: " <<uppercaseCount <<endl;
 return 0;
}