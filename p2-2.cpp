/*
    p2.cpp
    Zahir Ali
    9/27/23
    Description: Program that prints out CS in large block letters
*/
#include <iostream> 
using namespace std;

int main()
{
/*
Using the hint, I rearranged the syntax to get the large CS printed out.
*/
cout << "************************************************" << endl; 
// prints out barrier line with *
cout << "\n";   // \n inserts a new line, same as endl;
cout << "     C  C  C          S  S  S" << "\n"; 
//// Prints out the first part of the CS letter shape
cout << "   C         C       S       S"<< "\n";
 // Prints out the second part of the CS letter shape
cout << "  C                 S"         << "\n"; 
// Prints out the third part of the CS letter shape
cout << " C                   S"        << "\n"; 
// Prints out the fourth part of the CS letter shape
cout << " C                    S  S  S" << "\n";
 // Prints out the fifth part of the CS letter shape
cout << " C                             S"<< "\n"; 
// Prints out the sixth part of the CS letter shape
cout << "  C                S          S" << "\n";
 // Prints out the seventh part of the CS letter shape
cout << "   C         C       S  S  S"    << "\n"; 
// Prints out the eigth part of the CS letter shape
cout << "     C  C  C"                    << "\n"; 
// Prints out the ninth and final part of the CS letter shape
cout << "\n"; // inserts a new line
cout << "************************************************" << endl; 
//prints out the final barrier line composed of * that encloses the CS shape
cout << "    Computer Science is Cool Stuff!!" <<"\n"; 
//prints out Computer Sceicen is Cool Stuff!



 }
 /* OUTPUT OF FINAL CODE:
 ************************************************

     C  C  C          S  S  S
   C         C       S       S
  C                 S
 C                   S
 C                    S  S  S
 C                             S
  C                S          S
   C         C       S  S  S
     C  C  C

************************************************
    Computer Science is Cool Stuff!!
 */