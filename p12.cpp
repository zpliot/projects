/*
Zahir Ali
p12.cpp
10/8/23 - 10/8/23
Program Description: The user will enter the amount of quarters dimes and nickels they have and the code will output the total amount of cents they have.
*/
#include <iostream>
using namespace std;

int main() {
    int q, d, n, p; // Declare variables to store the counts of quarters, dimes, nickels, and pennies.

    cout << "Please enter quarters: ";
    cin >> q; // Input the number of quarters.
    cout << "Please enter dimes: ";
    cin >> d; // Input the number of dimes.
    cout << "Please enter nickels: ";
    cin >> n; // Input the number of nickels.
    cout << "Please enter pennies: ";
    cin >> p; // Input the number of pennies.

    if (q < 0 || d < 0 || n < 0 || p < 0) { // Check if any of the inputs are negative.
        cout << "Input values must be positive!" << endl; // Display an error message for negative inputs.
    } else {
        cout << "You have: ";
        cout << q << " * (25) + ";
        cout << d << " * (10) + ";
        cout << n << " * (5) + ";
        cout << p << " = ";
        cout << q * 25 + d * 10 + n * 5 + p << " cents" << endl; // Calculate and display the total value in cents if inputs are positive.
    }

    return 0;
}
/*
-----------------------------------------------------------
Please enter quarters: 20
Please enter dimes: 15
Please enter nickels: 5
Please enter pennies: 100
You have: 20 * (25) + 15 * (10) + 5 * (5) + 100 = 775 cents
-----------------------------------------------------------
*/