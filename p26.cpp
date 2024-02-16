/*
Zahir Ali
p26.cpp
10/15/23-10/17/23
Program Description
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Initialize variables to store the sum, average, largest, and smallest of the numbers
  int sum = 0;
  double average = 0.0;
  int largest = 0;
  int smallest = 0;

  // Prompt the user to enter numbers, terminated by the value -999
  int number = 0;
  int count = 0;
  cout << "Please enter numbers, terminated by the value -999: ";
  while (true) {
    // Print the prompt before reading the number
    cout << "Please enter a number: ";

    // Read the number from the user
    cin >> number;

    // Check if the user entered -999
    if (number == -999) {
      break;
    }

    // Update the sum, count, largest, and smallest variables
    sum += number;
    count++;
    if (count == 1) {
      largest = number;
      smallest = number;
    } else {
      if (number > largest) {
        largest = number;
      }
      if (number < smallest) {
        smallest = number;
      }
    }
  }

  // Calculate the average
  average = (double)sum / count;

  // Print the results
  cout << "The smallest = " << smallest << ", largest = " << largest << ", sum = " << sum << ", avg = " << average << endl;

  return 0;
}
/*
Sample Run:
Please enter numbers, terminated by the value -999: Please enter a number: 1
Please enter a number: 100
Please enter a number: 500
Please enter a number: -999
The smallest = 1, largest = 500, sum = 601, avg = 200.333
*/