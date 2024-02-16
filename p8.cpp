/* 
Zahir Ali
Program Name: p8.cpp
Date: 10/8/23 - 10/8/23
Description: User height message:
tall (over 72") 
short(under 60")
medium (b/w 72" to 60")
*/
#include <iostream>

int main() {
    int feet, inches;
    
    // Input from the user
    std::cout << "Please enter feet: ";
    std::cin >> feet;
    
    std::cout << "Please enter inches: ";
    std::cin >> inches;

    // Convert feet and inches to total inches
    int total_inches = (feet * 12) + inches;

    // Print the height
    std::cout << "Your height is " << feet << " feet + " << inches << " inches = " << total_inches << " inches" << std::endl;

    // Check the height and print the appropriate message
    if (total_inches > 72) {
        std::cout << "You're tall!" << std::endl;
    } else if (total_inches < 60) {
        std::cout << "You are vertically challenged!" << std::endl;
    } else {
        std::cout << "You are in between 5' and 6'." << std::endl;
    }

    return 0;
}
/* Sample code running

Please enter feet: 6
Please enter inches: 1
Your height is 6 feet + 1 inches = 73 inches
You're tall!
----------------------------

Please enter feet: 5
Please enter inches: 5
Your height is 5 feet + 5 inches = 65 inches
You are in between 5' and 6'.

----------------------------

Please enter feet: 4
Please enter inches: 1
Your height is 4 feet + 1 inches = 49 inches
You are vertically challenged!
----------------------------
*/