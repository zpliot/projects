/*
Description:
Type up the Array example and get it running
Submit your C program and the output
*/

//Array Examples
#include <iostream>
using namespace std;
#include <stdlib.h>
int main()
{
    int i;
    int velocity[5]; // ARRAY DECLARATION
    float distance[] = {10, 23.4, 20, 40.86};//Declaration and INITILIZATION
    float time[3]; // Array Declaration, will have 3 elements
    time[0] = 100; // Element 1 has index 0 and value 100
    time[1] = 200; // Element 2 has index 1 and value 200
    time[2] = 300; // Element 3 has index 2 and value 300

    for (int i =0; i < 3; i++)
    {
        cout << "time: " << time[i] << endl;
    }

    // velocity[] array has 5 elements:
    // velocity[0], velocity[1], velocity[2], velocity[3], velocity[4],
    for (i=0; i<5; i++)
    {
        cout << "Enter velocity # "<< i + 1 << " : ";
        cin >> velocity[i]; // ARRAY INTPUT
    }
    cout << "the velcoities you entered: ";
    for (i=0; i<5; i++)
    {
        cout << velocity[i] ; //Array Output
        if (i<4)
            cout << ",";
        
    }

    cout << endl;
    system("pause");
    return 0;
}
/*
Output of Code:
ime: 100
time: 200
time: 300
Enter velocity # 1 : 5
Enter velocity # 2 : 4
Enter velocity # 3 : 3
Enter velocity # 4 : 2
Enter velocity # 5 : 1
the velcoities you entered: 5,4,3,2,1
*/
