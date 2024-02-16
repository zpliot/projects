//p20a.cpp
//Zahir Ali
//10/16/23-10/16/23
//Description: Examples of FOR, WHILE

#include <iostream>
using namespace std;

int main()
{
    int count;
    // FOR LOOP is used when an action must be repeated
    // FOR ( BEGIN; END CONDITION; INCREMENT) ( statemets... ;)
    for (count = 0; count < 3; count ++ )
    {
        cout << "In FOR loop:" << endl;
        cout << "count = " << count << endl;
    }

    // WHILE loop is also used when an action must be repeated
    // WHILE ( END CONDITION ) ( statements... ;)
    while ( count < 4) {
        cout << "In WHILE loop: " << endl;
        cout << "count = " << count << endl; // shows only if count < 3
        count++;
    }

    // DO-WHILE loop is used when an action must be repeated at least once
    // DO ( statements... ;) WHILE ( END CONDIITON );
    do {
        cout << "In DO-WHILE loop:" << endl;
        cout << "count = " << count << endl;
        count = count + 1;
     } while (count < 3); // coundition tested at the end, so loop happens at least once

    return 0;
}
/*
In FOR loop:
count = 0
In FOR loop:
count = 1
In FOR loop:
count = 2
In WHILE loop: 
count = 3
In DO-WHILE loop:
count = 4
*/