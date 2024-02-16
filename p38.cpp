// p38.cpp
// Zahir Ali
// 10/21/23 - 10/21/23
/*
Program Description: program defines a function called 'average' that calculates the average of three float parameters.
*/ 

#include <iostream>
using namespace std;

// Function Prototype
float average(float valA, float valB, float valC);

int main()
{
    float num1 = 10.5, num2 = 20.5, num3 = 30.5;
    float result = average(num1, num2, num3);

    // Display the average of the three numbers
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;

    return 0;
}

// Function Definition
float average(float valA, float valB, float valC)
{
    return (valA + valB + valC) / 3.0; // Calculate the average and return the result
}
/*
Output of Code:
The average of 10.5, 20.5, and 30.5 is: 20.5
*/