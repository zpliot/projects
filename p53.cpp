/*
p53.cpp
11/3/23-11/5/23
Zahir Ali
Program Description: The program will create a  array with a random number of 
elements and will then output its sum and average
*/
#include <iostream>
#include <ctime>

using namespace std;

int main() {
  // Initialize the random seed
  srand(time(NULL));

  // Generate a random number between 20 and 30
  int X = rand() % 11 + 20;

  // Generate an array of X random elements
  int ARRAY1[X];
  for (int i = 0; i < X; i++) {
    // Generate a random number between 100 and 200
    int N = rand() % 101 + 100;

    // Make sure that each array element has a different value
    while (true) {
      bool isUnique = true;
      for (int j = 0; j < i; j++) {
        if (ARRAY1[j] == N) {
          isUnique = false;
          break;
        }
      }
      if (isUnique) {
        break;
      } else {
        // Generate a new random number if the current number is not unique
        N = rand() % 101 + 100;
      }
    }

    // Add the random number to the array
    ARRAY1[i] = N;
  }

  // Output the elements of the array like `a[n] = n`
  for (int i = 0; i < X; i++) {
    cout << "a[" << i << "] = " << ARRAY1[i] << endl;
  }

  // Calculate the sum and average of the array elements
  int sum = 0;
  for (int i = 0; i < X; i++) {
    sum += ARRAY1[i];
  }
  float average = sum / X;

  // Display the sum and average
  cout << "sum = " << sum << endl;
  cout << "average = " << average << endl;

  return 0;
}
/*
Output of Code: 
a[0] = 151
a[1] = 130
a[2] = 144
a[3] = 157
a[4] = 120
a[5] = 103
a[6] = 165
a[7] = 149
a[8] = 170
a[9] = 132
a[10] = 107
a[11] = 195
a[12] = 124
a[13] = 128
a[14] = 171
a[15] = 126
a[16] = 177
a[17] = 189
a[18] = 175
a[19] = 113
a[20] = 190
a[21] = 137
a[22] = 146
a[23] = 111
sum = 3510
average = 146
*/