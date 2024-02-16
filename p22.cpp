// Zahir Ali
// p22.cpp
// 10/15/23 - 10/17/23
// Program Description: Program outputs the sum of every integer from 150 to 250 inclusive with a total count of numbers and average of the numbers
#include <iostream>
using namespace std;

int main() {

    // Initialize sum, count, and average variables
    int sum = 0;
    int count = 0;
    double average = 0.0;

    // Iterate from 150 to 250 inclusive and add each number to the sum
    for (int i = 150; i <= 250; i++) {
        sum += i;
        count++;
    }

    // Calculate the average
    average = (double)sum / count;

    // Print the results
    cout << "The sum of the numbers from 150 to 250 inclusive is: " << sum << endl;
    cout << "There are " << count << " numbers." << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
/*
Output of the code
The sum of the numbers from 150 to 250 inclusive is: 20200
There are 101 numbers.
The average of the numbers is: 200
*/