/*
Zahir Ali
10/1/23
p5.cpp
Program Description: The code will print out a letter of the user input in a C-shape. 
*/
// Include the iostream header file to use cout and cin
#include <iostream>

// Use the std namespace to avoid having to prefix cout and cin with std::
using namespace std;

// Define the main function
int main() {
    // Declare a character variable to store the user's input
    char inputChar;

    // Prompt the user to enter a character
    cout << "Please enter a character: "; // This procures the text of Please enter a character in which the user would type out a letter of their choice
    cin >> inputChar; // cin stores the inputted character by the user

    // Define the size of the "C" shape
    int height = 7;// height of the C shape set at 7
    int width = 5; // width of the C shape set at 5 

    // Print the "C" shape
    for (int i = 0; i < height; i++) { // Iterates over the height of the "C" shape
        for (int j = 0; j < width; j++) { // Iterates over the width of the "C" shape
            if (i == 0 || i == height - 1) { // If the current row is the first or last row
                cout << inputChar; // Print the input character
            } else { // Otherwise
                if (j == 0) { // If the current column is the first column
                    cout << inputChar; // Print the input character
                } else { // Otherwise
                    cout << " "; // Print a space
                }
            }
        }
        cout << endl; // Print a newline character
    }

    // Print the text "Computer Science is Cool Stuff!!"
    cout << "Computer Science is Cool Stuff!!" << endl;

    // Return 0 from the main function
    return 0;
}
/* Code output
Please enter a character: S
SSSSS
S    
S    
S    
S    
S    
SSSSS
Computer Science is Cool Stuff!!
*/