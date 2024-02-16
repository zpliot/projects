/*
Zahir Ali
11/12/23
p57.cpp
Program Description: Given an array of integers, the program will return true if 6 appears 
as either the first or last element in the array. The array will be of size of
one or more and will work with any size array.
*/
#include <iostream>

using namespace std;

bool firstLast6(int array[], int size) {
  return (array[0] == 6 || array[size - 1] == 6);
}

int main() {
  int array[] = {2, 5, 6, 6};

  // Check if 6 appears as the first or last element in the array.
  bool result = firstLast6(array, sizeof(array) / sizeof(array[0]));

  // Show "true" or "false".
  cout.setf(std::ios::boolalpha);
  cout << result << endl;

  return 0;
}
/*
Program Output:
For int array 1 2 and 6 it prints out true
For int array 4 2 3 1 it prints out false
For int array 2 5 6 6 it prints out true
*/