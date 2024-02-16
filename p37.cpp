// p37.cpp
// Zahir Ali
// 10/19/23 - 10/22/23
/*
Program Descrption: program defines a function called 'larger' that takes two float parameters
and returns the larger of the two values. 
*/

#include <iostream>
using namespace std;

// Function Prototype
float larger(float valA, float valB);

int main()
{
    float num1 = 1, num2 = 2, temp;
    
    // Calculate and display the larger of num1 and num2
    cout << "The larger of " << num1 << " and " << num2 << " is " << larger(num1, num2) << endl;
    
    // Calculate and display the larger of num2 and num1 (swapped order)
    temp = larger(num2, num1);
    cout << "The larger of " << num2 << " and " << num1 << " is " << temp << endl;

    return 0;
}

// Function Definition
float larger(float valA, float valB)
{
    if (valA > valB)
    {
        return valA; // valA is larger
    }
    else
    {
        return valB; // valB is larger or equal
    }
}
/*
Output of Code:
The larger of 1 and 2 is 2
The larger of 2 and 1 is 2
*/