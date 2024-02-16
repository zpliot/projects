/*
p52.cpp
11/2/23-11/5/23
Zahir Ali
Program Description: Prompt the user to ask the user to ask how many numbers they
want in an array and will ask the user to input a value for each one and the code
will print out the numbers entered in sequence. 
*/
#include <stdio.h>

int main() {
  int n; // Number of numbers to enter
  int numbers[100]; // Array to store the numbers

  // Ask the user how many numbers to enter
  printf("How many numbers would you like to enter? ");
  scanf("%d", &n);

  // Enter the numbers into the array
  for (int i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Show the numbers in the array
  printf("The numbers you entered are: ");
  for (int i = 0; i < n; i++) {
    printf("%d, ", numbers[i]);
  }
  printf("\n");

  return 0;
}
/*
Output of Code:
How many numbers would you like to enter? 3
Enter number 1: 5
Enter number 2: 100
Enter number 3: 300
The numbers you entered are: 5, 100, 300, 
*/