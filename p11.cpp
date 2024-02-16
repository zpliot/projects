/*
Zahir Ali
p11.cpp
10/8/23 - 10/8/23
Voting Program: User inputs their age, ctizenship, and registration status to check if they are eligbele 
*/
#include <iostream>
using namespace std;

int main() {
    int age;
    string citizen, registered;

    // Prompt the user for their age, citizenship, and registration status
    cout << "Program to determine if you can vote.\n";
    cout << "How old are you? ";
    cin >> age;
    cout << "Are you a U.S. citizen? (yes/no): ";
    cin >> citizen;
    cout << "Have you registered to vote? (yes/no): ";
    cin >> registered;

    // Check if the user can vote and provide appropriate messages
    if (age >= 18 && citizen == "yes" && registered == "yes") {
        cout << "Congratulations, you can vote.\n";
    } else {
        cout << "You cannot vote.\n";
        
        // Check individual criteria and provide specific reasons if not met
        if (age < 18) {
            cout << "- You must be over 18 to vote.\n";
        }
        
        if (citizen != "yes") {
            cout << "- You must be a citizen to vote.\n";
        }
        
        if (registered != "yes") {
            cout << "- You must register to vote.\n";
        }
    }

    return 0;
}
/*
-------------------------------------------
Program to determine if you can vote.
How old are you? 50
Are you a U.S. citizen? (yes/no): yes
Have you registered to vote? (yes/no): yes
Congratulations, you can vote.
-------------------------------------------
Program to determine if you can vote.
How old are you? 14
Are you a U.S. citizen? (yes/no): yes
Have you registered to vote? (yes/no): yes
You cannot vote.
- You must be over 18 to vote.
-------------------------------------------
Program to determine if you can vote.
How old are you? 18
Are you a U.S. citizen? (yes/no): yes
Have you registered to vote? (yes/no): yes
Congratulations, you can vote.
------------------------------------------
*/