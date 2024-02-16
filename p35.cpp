// p35.cpp
// Zahir Ali
// 10/22/23
// program calculates the total weight of a specified number of people,
// with each person having a given weight. It demonstrates the use of a function
// to calculate and display the total weight.

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
void weightOfpeople(int numberPeople, double weightPerPerson);

int main()
{
    int numberPeople = 5;
    double weightPerPerson = 180.55;

    // Function Call
    weightOfpeople(numberPeople, weightPerPerson);

    return 0;
}

// Function Definition
void weightOfpeople(int numberPeople, double weightPerPerson)
{
    cout << "The total weight of " << numberPeople << " people,\n";
    cout << "each person weighing " << weightPerPerson << " lb\nis ";
    cout << fixed << setprecision(1) << numberPeople * weightPerPerson << " lb\n";
}
/*
Output of Code:
The total weight of 5 people,
each person weighing 180.55 lb
is 902.8 lb
*/