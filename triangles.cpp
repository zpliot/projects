/*
Zahir Ali
Date: 10/29/23
triangles.cpp
Program Description: The program will ask the user for 3 positive values to
produce a triangle and will determine the type of triangle based on the
side values given and will repeat until user stops the code
*/
#include <iostream>

using namespace std;

// Validates the user input to ensure that the sides of the triangle are positive.
// Returns true if the input is valid, and false otherwise.
bool validate_input(float a, float b, float c) {
  return a > 0 && b > 0 && c > 0;
}

// Determines the type of triangle based on the lengths of the sides.
// Returns a string representing the triangle type, such as "Equilateral", "Right",
// "Isosceles (not equilateral)", or "Other type".
string get_triangle_type(float a, float b, float c) {
  if (a == b && b == c) {
    return "Equilateral";
  } else if (a * a + b * b == c * c) {
    return "Right";
  } else if (a == b || a == c || b == c) {
    return "Isosceles (not equilateral)";
  } else {
    return "Other type";
  }
}

int main() {
  float a, b, c;

  // Keeps track of the number of times the user has entered invalid input.
  int num_tries = 3;

  bool valid_input = false;

  // Prompts the user for the lengths of the triangle sides and validates the input.
  while (!valid_input && num_tries > 0) {
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (validate_input(a, b, c)) {
      valid_input = true;
    } else {
      cout << "Invalid input. Please enter positive values for the sides of the triangle." << endl;
      num_tries--;
    }
  }

  // If the user has entered invalid input more than the allowed number of times, exit the program.
  if (!valid_input) {
    cout << "You have exceeded the number of tries. Please try again later." << endl;
    return 1;
  }

  // Determines the type of triangle and prints the result to the console.
  string triangle_type = get_triangle_type(a, b, c);

  cout << "The triangle type is: " << triangle_type << endl;

  // Prompts the user to repeat the program.
  char repeat;
  cout << "Do you want to repeat the program? (y/n) ";
  cin >> repeat;

  if (repeat == 'y') {
    main();
  }

  return 0;
}
/*
Output of Code:
Enter the lengths of the three sides of the triangle: 2 3 4
The triangle type is: Other type
Do you want to repeat the program? (y/n) y
Enter the lengths of the three sides of the triangle: 3 4 5
The triangle type is: Right
Do you want to repeat the program? (y/n) y
Enter the lengths of the three sides of the triangle: 3 3 5
The triangle type is: Isosceles (not equilateral)
Do you want to repeat the program? (y/n) n
*/