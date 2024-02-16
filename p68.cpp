/*
Zahir Ali
p68.cpp
12/2/23
Program Description: A program that outputs 100 random numbers 
between 1-100 in a file named "numbers.txt" writing 10 numbers per line. 
*/
#include <iostream>
#include <fstream>
#include <random>

using namespace std;

int main() {
  // Open output file
  ofstream outStream("numbers.txt");
  if (!outStream.is_open()) {
    cerr << "Error opening file \"numbers.txt\"!" << endl;
    return 1;
  }

  // Random number engine
  mt19937 generator(time(nullptr));
  uniform_int_distribution<int> distribution(1, 100);

  // Generate and write 100 random numbers
  int count = 0;
  for (int i = 0; i < 100; ++i) {
    outStream << distribution(generator) << ' ';
    count++;

    // Insert newline after every 10 numbers
    if (count % 10 == 0) {
      outStream << endl;
      count = 0;
    }
  }

  // Close output file
  outStream.close();

  return 0;
}
/*
Program Output: 
2 3 97 11 70 40 87 86 59 11 
53 75 52 89 58 38 58 88 27 9 
37 32 20 64 8 50 7 57 6 67 
23 26 83 7 62 42 40 66 42 34 
78 26 24 98 91 8 25 97 37 44 
3 90 40 5 88 25 67 85 73 73 
32 70 16 67 32 53 14 61 38 34 
6 38 95 20 7 87 88 77 68 37 
6 19 68 47 98 45 22 19 40 19 
30 24 13 75 25 25 83 59 16 79 

*/
