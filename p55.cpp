/*
Zahir Ali
11/10/23
p55.cpp
Program Description: Given an array of integers,
 the program will return the largest value in the array
*/
#include <iostream>

using namespace std;

int max(int array[], int size) {
  // Initialize the largest value to the first element in the array.
  int largest = array[0];

  // If the array size is 1, then the largest element is simply the
  // first element. Return it.
  if (size == 1) {
    return largest;
  }

  // Iterate over the rest of the array and compare each element to
  // the largest value. If the current element is larger, update the
  // largest value.
  for (int i = 1; i < size; i++) {
    if (array[i] > largest) {
      largest = array[i];
    }
  }

  // Return the largest value.
  return largest;
}

int main() {
  int array1[] = {0, 8, 3, 4, 1};
  int array2[] = {0, 2, 7, 4};
  int array3[] = {2, 3, 4};

  cout << max(array1, 5) << endl; // 8
  cout << max(array2, 4) << endl; // 7
  cout << max(array3, 3) << endl; // 4

  return 0;
}
/*
Code Output:
8
7
4
*/