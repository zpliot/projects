/* 
Zahir Ali
Program Name: p9.cpp
Date: 10/8/23 - 10/8/23
Description: Letter grade 
A is b/w 90-100
B is b/w 80-90
C is b/w 70-90
D is b/w 60-90
F is under 60
*/
#include <iostream>
using namespace std;

int main() {
    int grade;
    
    // Prompt the user for input
    cout << "Please enter a grade in percent: ";
    cin >> grade;

    // Check the grade and output the corresponding letter grade
    if (grade >= 90) {
        cout << "You have an 'A'" << endl;
    } else if (grade >= 80) {
        cout << "You have a 'B'" << endl;
    } else if (grade >= 70) {
        cout << "You have a 'C'" << endl;
    } else if (grade >= 60) {
        cout << "You have a 'D'" << endl;
    } else {
        cout << "You have an 'F'" << endl;
    }

    return 0;
}

/*
------------------------------------
Please enter a grade in percent: 91
You have an 'A'
Please enter a grade in percent: 90
You have an 'A'
------------------------------------
Please enter a grade in percent: 81
You have a 'B'
Please enter a grade in percent: 80
You have a 'B'
------------------------------------
Please enter a grade in percent: 71
You have a 'C'
Please enter a grade in percent: 70
You have a 'C'
------------------------------------
Please enter a grade in percent: 61
You have a 'D'
Please enter a grade in percent: 60
You have a 'D'
------------------------------------
Please enter a grade in percent: 59
You have an 'F'
Please enter a grade in percent: 50
You have an 'F'
-----------------------------------
*/
