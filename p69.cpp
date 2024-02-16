/*
Zahir Ali
p69.cpp
12/3/23
Program Descrption:  a program that takes its input from a file of number of type double. 
The program shows the sum and average of all the numbers found in the file data69.txt
*/
#include <iostream> // library for input/output
#include <fstream> // library for file operations
#include <iomanip> // library for formatting output

using namespace std;

int main() {
  // Open file "numbers.txt" for reading (replace with actual file name)
  ifstream infile("numbers.txt");
  if (!infile.is_open()) { // Check if file opened successfully
    cerr << "Error opening file!" << endl; // Print error message if failed
    return 1; // Exit program with error code 1
  }

  // Initialize variables
  double sum = 0.0; // Store sum of all numbers
  int count = 0; // Count of numbers read
  double number; // Temporary variable to hold each number

  // Loop through file reading each double value
  while (infile >> number) {
    // Add each number to the sum
    sum += number;
    // Increment count of numbers read
    count++;
  }

  // Check if any numbers were read
  if (count == 0) {
    cerr << "No numbers found in the file!" << endl; // Print message if no numbers found
    return 1; // Exit with error code 1 (no data)
  }

  // Calculate and store average
  double average = sum / count; // Divide sum by count to get average

  // Print sum and average with formatting
  cout << fixed << setprecision(2) << // Set output precision to two decimal places
       "The sum of all numbers is: " << sum << endl; // Print sum with label
  cout << "The average of all numbers is: " << average << endl; // Print average with label

  // Close the file to avoid leaks
  infile.close();

  return 0; // Exit program successfully
}
/*
Program Output:
The sum of all numbers is: 4615.00
The average of all numbers is: 46.15
*/