/*
   p3.cpp
   Zahir Ali
   10/1/23
   Description: The code will produce an output that will ask for age (whole number) and will print out a set height, age, and weight with 1 decimal.
    Examples of:
      - VARIABLES: Initialization and Declaration
      - INPUT:    cin >>
      - OUTPUT:   cout <<
      
*/
#include <iostream>
using namespace std;

int main(){
    // DECLARE variables
    double weight; //DOUBLE - 8 bytes, has a decimal, Ex: 3.14 , 2.71
    float height;  //FLOAT  - 4 bytes, has a decimal, Ex: 3.14, 2.71
    int Age;       //INTEGER - 4 bytes, NO decimal  , Ex: 1.00, 3.00
    
    // INITIALIZE variables
    weight = 183.54;     // Initialize variable wight to 183.54
    height = 6.0;        // Initialize variabl height to 6.0
    
    // OUTPUT: Prompt the user to enter age
    cout << "Please enter a whole number age:";
    // INPUT: The user types something on the keyboard, and presses Enter
    cin >> Age; //INITIALIZE Age to whatever the user enters
    // OUTPUT: Show the value of variables, and what user entered
    cout << "Weight = " << weight <<"\n"<< "Height = " << height << "\n";
    cout << "The entered age was: " << Age << "\n";
    cout.setf(ios::fixed); // To specify fixed point notation
    cout.setf(ios::showpoint); // To specify fixed point notation
    cout.precision(1); // To specify that ONE decimal place will always be show
    cout << "The weight with 1 decimal is " << weight << endl; //Prints out the weight with 1 decimal is ___ with the weight variable in place
    
    return 0; //This is where the program ends
}
/* FINAL CODE OUTPUT (example input is 10)
Please enter a whole number age:10
Weight = 183.54
Height = 6
The entered age was: 10
The weight with 1 decimal is 183.5
*/ 