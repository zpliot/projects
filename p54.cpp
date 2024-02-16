/*
Name: Zahir Ali
Date: 11/10/23
p54.cpp
Program description: This program counts the number of 2s in an array of any size.

*/

#include <iostream>

using namespace std;

// Function prototype:
int count2s(int array[], int size);

// This function counts the number of 2s in the given array.
int count2s(int array[], int size) {
  // Initialize a counter to keep track of the number of 2s found.
  int count = 0;

  // Iterate over the array and increment the counter if we find a 2.
  for (int i = 0; i < size; i++) {
    if (array[i] == 2) {
      count++;
    }
  }

  // Return the counter.
  return count;
}

int main() {
  // Create three test arrays.
  int array1[] = {0, 3, 3, 4, 5};
  int array2[] = {0, 2, 2, 4};
  int array3[] = {2, 3
/*
Program Output
0
2
1

*/