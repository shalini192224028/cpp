#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    
    // Input string from the user
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Convert string to upper case
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Upper case: " << str << endl;
    
    // Convert string to lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lower case: " << str << endl;
    
    // Reverse the string
    reverse(str.begin(), str.end());
    cout << "Reverse: " << str << endl;
    
    return 0;
}
