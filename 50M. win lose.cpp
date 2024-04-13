#include <iostream>

using namespace std;

int footballPoints(int wins, int draws, int losses) {
    // Calculate total points
    int totalPoints = (wins * 3) + (draws * 1) + (losses * 0);
    return totalPoints;
}

int main() {
    int wins, draws, losses;

    // Input from the user
    cout << "Enter the number of wins: ";
    cin >> wins;
    cout << "Enter the number of draws: ";
    cin >> draws;
    cout << "Enter the number of losses: ";
    cin >> losses;

    // Calculate and print total points
    int totalPoints = footballPoints(wins, draws, losses);
    cout << "Total points: " << totalPoints << endl;

    return 0;
}
