/*
    p1.cpp
    Zahir Ali
    9/27/23
    Description: Examples of output and variables
*/

#include <iostream> // Need this for COUT and CIN
using namespace std; // Need this for COUT and CIN

int main() // This is where the program starts
{
    cout << "Hello"; // Everything in double quotes shows as is
    cout << "\n";    // \n inserts a new line, same as pressing the Enter key
    cout << "Human" << "\n";

    // VARIABLES are named storage locations for numbers, strings, characters
    // STRING is anything enclosed in quotes
    string myName = "Zahir"; // STRING variable "myName"
    cout << "Your name is: " << myName << "\n";

    // INTEGER is a whole number, with only ZERO after the decimal
    int wholeNum = 5; // INTEGER variable "wholeNum" (remove .0 to make it an integer)
    cout << "The number stored in wholeNum is: " << wholeNum << "\n"; // Corrected variable name to wholeNum
    
    //FLOAT or DOUBLE is a number where the decimal partis NOT ZERO
    float myFloat= 5.75; // float
    cout << "The number stored in myFloat is: " <<myFloat << "\n"; //output of number stored in myFloat
    
    return 0; // This is where the program ends
}
/* Final code output:
Hello
Human
Your Name is: Zaihr 
The number stored in wholeNu is: 5
The number stored in myFlat is: 5.75
*/