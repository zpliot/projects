// p36.cpp
// Zahir Ali
// 10/20/23 - 10/22/23
//Program Description:
// This program defines a function called randomNum that generates a random number
// between -10 and 10, and informs the user whether the number is positive, negative, or zero.
// It demonstrates the use of random number generation and conditional statements.

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

// Function Prototype
void randomNum();

int main()
{
    int iseed = time(NULL); // Get the current time (system time) to seed the random number generator
    srand(iseed); // Seed the random number generator using the current time

    cout << "Function call 1: " << endl;
    randomNum(); // Call the randomNum function
    cout << "Function call 2: " << endl;
    randomNum(); // Call the randomNum function again

    return 0;
}

// Function Definition
void randomNum()
{
    int min = -10;   // Minimum value for the random number
    int max = 10;    // Maximum value for the random number

    // Generate a random number between -10 and 10
    int randomNum = min + rand() % (max - min + 1);

    cout << "Generating a random number between -10 to 10: " << randomNum << endl;

    if (randomNum < 0)
    {
        cout << "The random number " << randomNum << " is Negative." << endl;
    }
    else if (randomNum > 0)
    {
        cout << "The random number " << randomNum << " is Positive." << endl;
    }
    else
    {
        cout << "The random number is Zero." << endl;
    }
}
/*
Output of Code:
-------------------------------------------------------
Function call 1: 
Generating a random number between -10 to 10: -6
The random number -6 is Negative.
Function call 2: 
Generating a random number between -10 to 10: 5
The random number 5 is Positive.
-------------------------------------------------------
Function call 1: 
Generating a random number between -10 to 10: 1
The random number 1 is Positive.
Function call 2: 
Generating a random number between -10 to 10: -7
The random number -7 is Negative.
-------------------------------------------------------
*/