#include <iostream>
using namespace std;

int main() {
    int days;
    int minutes;
    int total = 0;
    int highest = 0;

    cout << "How many days of exercise do you want to enter? ";
    cin >> days;

    // Stop if the number of days is not valid
    if (days < 1) {
        cout << "Invalid input. Please run the program again." << endl;
        return 1;
    }

    // Loop once per day, adding each day's minutes to the accumulator
    for (int i = 1; i <= days; i++) {
        cout << "Enter minutes for day " << i << ": ";
        cin >> minutes;

        total = total + minutes;

        // Extra credit: track the highest day
        if (minutes > highest) {
            highest = minutes;
        }
    }

    // Convert to double so the average keeps its decimals
    double average = static_cast<double>(total) / days;

    cout << endl << "--- Fitness Report ---" << endl;
    cout << "Total Minutes: " << total << endl;
    cout << "Average Minutes: " << average << endl;
    cout << "Highest Minutes: " << highest << endl;

    return 0;
}
