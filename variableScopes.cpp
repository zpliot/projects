/*
variableScopes.cpp
Zahir Ali
10/22/23
Examples of Global and Local variables
"Scope" refers to "where a variable can be used"
If a variable is declared inside of a function:
-then the variable is "Local" and it belongs only to that function
-such variable can be "seen" only by the function where it was declared.
-The "Scope" of a "Local" variable is its function.
-Parameter variables are Local and have a scope of only their function
(a Local variable can only be used inside the function where it was declared)
If a variable is declared outside (and before) all other functions
-then the variable is "Global", and it belongs to all functions
-changing a "Global" variable in one function, changes it for all functions
-The "Scope" of a "Global" variable are all functions
(a Global variable can be used inside all functions)
*/
#include <iostream>
using namespace std;

int Global_Variable = 1; // Declared before and outside all other functions

// FUNCTION PROTOTYPE:
void aFunction(int parameterVariable);

int main()
{
    int Local_Variable = 5; // Declared inside the main()

    cout << "=== Inside the main() ===" << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // shows 1

    Global_Variable = 10; // Change Global_Variable
    cout << "Global_Variable = " << Global_Variable << endl; // shows 10

    aFunction(50);

    cout << "\n=== Back Inside the main() ===" << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // shows 100

    return 0;
}

// FUNCTION DEFINITION:
void aFunction(int parameterVariable)
{
    int Local_Variable = parameterVariable; // Declare a Local Variable

    cout << "\n=== Inside aFunction() ===" << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 50
    cout << "Global_Variable = " << Global_Variable << endl; // shows 100
    cout << "=== End Inside aFunction() ===" << endl;
}
/*
Output for Code:
=== Inside the main() ===
Local_Variable = 5
Global_Variable = 1
Global_Variable = 10

=== Inside aFunction() ===
Local_Variable = 50
Global_Variable = 10
=== End Inside aFunction() ===

=== Back Inside the main() ===
Local_Variable = 5
Global_Variable = 10
*/