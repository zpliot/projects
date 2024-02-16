/*
Zahir Ali
p25.cpp
10/15/23-10/17/23
Program Description: Program finds the largest, smallest, sum, and average of X
numbers entered by the user
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Prompt the user to enter the number of numbers
  int numberOfNumbers = 0;
  cout << "How many numbers would you like to enter? ";
  cin >> numberOfNumbers;

  // Initialize variables to store the largest, smallest, sum, and average of the numbers
  int largest = 0;
  int smallest = 0;
  int sum = 0;
  double average = 0.0;

  // Iterate over the number of numbers and prompt the user to enter each number
  for (int i = 0; i < numberOfNumbers; i++) {
    int number = 0;
    cout << "Please enter a number: ";
    cin >> number;

    // Update the largest and smallest variables if necessary
    if (i == 0) {
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

    // Add the number to the sum
    sum += number;
  }

  // Calculate the average
  average = (double)sum / numberOfNumbers;

  // Print the results
  cout << "The largest number is: " << largest << endl;
  cout << "The smallest number is: " << smallest << endl;
  cout << "The sum of the numbers is: " << sum << endl;
  cout << "The average of the numbers is: " << average << endl;

  return 0;
}
/*
Test Run 1:
How many numbers would you like to enter? 5
Please enter a number: 100
Please enter a number: 200
Please enter a number: 300
Please enter a number: 400
Please enter a number: 500
The largest number is: 500
The smallest number is: 100
The sum of the numbers is: 1500
The average of the numbers is: 300

Test Run 2: 
How many numbers would you like to enter? 4
Please enter a number: 10
Please enter a number: 20
Please enter a number: 30
Please enter a number: 40
The largest number is: 40
The smallest number is: 10
The sum of the numbers is: 100
The average of the numbers is: 25

Test Run 3:
How many numbers would you like to enter? 2
Please enter a number: 199
Please enter a number: 25
The largest number is: 199
The smallest number is: 25
The sum of the numbers is: 224
The average of the numbers is: 112
*/