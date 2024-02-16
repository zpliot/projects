/*
   p4.cpp
   Zahir Ali
   10/1/23
   Program Description: The program will ask for an input of 2 numbers and will prnt out he sum and product.
*/
#include <iostream>
using namespace std;

int main() {
    double number1, number2; // initializes the variables of number1 and number2 as the data type double
    
    // Prompt the user to enter the first number
    cout << "Please enter number 1: "; // cout is the text input which asks the the user to put any number for the 1st value
    cin >> number1; // cin stores the number inputted by the user the variable number1
    
    // Prompt the user to enter the second number
    cout << "Please enter number 2: "; //cout is the text input which asks for the user to put any number for the 2nd value
    cin >> number2; // cin stores the number inputted by the user as the variable number2
    
    // Calculate the sum and product
    double sum = number1 + number2; //Using the double class, we add the variables of number 1 and 2 
    double product = number1 * number2; // Initizialzes the product variable as a double which uses the multiplly function to mutliply number 1 and number2
    
    // Output the results
    cout << "Sum = " << sum << endl; // This shows the sum of the two numbers inputed
    cout << "Product = " << product << endl; // This line shows the produce of the two numbers inputed
    
    return 0;
}

/* Output of code 
Please enter number 1: 9
Please enter number 2: 11
Sum = 20
Product = 99
*/

