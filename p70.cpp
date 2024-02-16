/*
Zahir Ali
p70.cpp
12/4/23
Program Descpriton:  a program that will search a file filled with numbers, 
and show the largest number and the smallest number. 
*/
#include <iostream>
#include <fstream>
#include <limits>
#include <cstdio> 

using namespace std;

int main() {
  // File path
  const string filePath = "data70.txt";

  // Open the file for reading
  ifstream infile(filePath);
  if (!infile.is_open()) {
    cerr << "Error opening file: " << filePath << endl;
    return 1;
  }

  // Initialize variables
  double largest = DBL_MIN, smallest = DBL_MAX;
  double value;

  // Process the file
  while (infile >> value) {
    if (value > largest) {
      largest = value;
    } else if (value < smallest) {
      smallest = value;
    }
  }

  // Check for file read errors
  if (infile.eof() && !infile.good()) {
    cerr << "Error reading file: " << filePath << endl;
    return 1;
  }

  // Close the file
  infile.close();

  // Print results
  cout << "Largest number: " << largest << endl;
  cout << "Smallest number: " << smallest << endl;

  return 0;
}
/*
Program Output:
Largest number: 1104
Smallest number: 2
*/