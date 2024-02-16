/*
Zahir Ali
11/12/23
p59.cpp
Program Description: Program checks if int array contains a 2 or 3,
and prints out true or false in accordance to the values in the array.

*/
#include <iostream>
using namespace std;

bool no23(int array[], int size) {
// Iterate over the array and check if any of the elements are 2 or 3.
  for (int i = 0; i < size; i++) {
    if (array[i] == 2 || array[i] == 3) {
      return false;
    }
  }
// If point is reached here, the array does not contain a 2 or 3, 
//so return true.
  return true;
}

int main() {
  // 3 int arrays initialized
  int array1[] = {4, 5};
  int array2[] = {4, 2, 1};
  int array3[] = {3, 5, 0, 1};

  // Show true and false instead of 1 and 0
  cout.setf(std::ios::boolalpha);
  // Print the results of calling the no23() 
  //function on each array.
  cout << no23(array1, 2) << endl; // true
  cout << no23(array2, 3) << endl; // false
  cout << no23(array3, 4) << endl; // false

  return 0;
}
/*
Program Output:
Given the arrays of 
  int array1[] = {4, 5}; --> true
  int array2[] = {4, 2, 1}; --> false
  int array3[] = {3, 5, 0, 1}; --> false
*/