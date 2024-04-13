#include <iostream>

using namespace std;

int animals(int chickens, int cows, int pigs) {
    // Calculate total legs for each species
    int totalChickensLegs = chickens * 2;
    int totalCowsLegs = cows * 4;
    int totalPigsLegs = pigs * 4;

    // Calculate total number of legs
    int totalLegs = totalChickensLegs + totalCowsLegs + totalPigsLegs;

    return totalLegs;
}

int main() {
    // Input from the user
    int chickens, cows, pigs;
    cout << "Enter the number of chickens: ";
    cin >> chickens;
    cout << "Enter the number of cows: ";
    cin >> cows;
    cout << "Enter the number of pigs: ";
    cin >> pigs;

    // Calculate total number of legs and output the result
    int totalLegs = animals(chickens, cows, pigs);
    cout << "Total number of legs: " << totalLegs << endl;

    return 0;
}
