#include <iostream>

using namespace std;

class DivisibleByNine {
private:
    int sum;

public:
    // Constructor
    DivisibleByNine() : sum(0) {
        cout << "Numbers between 100 and 200, divisible by 9:" << endl;
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                cout << i << " ";
                sum += i;
            }
        }
        cout << endl;
    }

    // Destructor
    ~DivisibleByNine() {
        cout << "The sum: " << sum << endl;
    }
};

int main() {
    // Create an instance of DivisibleByNine
    DivisibleByNine obj;

    return 0;
}
