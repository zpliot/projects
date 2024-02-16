/*
Name: Zahir Ali
p58.cpp
11/12/23
Program Description: Program sorts an array of 
integers in ascending order using the 
Bubble Sort algorithm.
*/
#include <stdio.h>

void bubbleSort(int array[], int size) {
  // Flag to track whether any swaps have been made during each pass of the
  // sorting algorithm.
  bool swapped = true;

  // Loop through the array until no more swaps are needed.
  for (int i = 0; i < size - 1 && swapped; i++) {
    swapped = false;

    // Loop through the array, comparing adjacent elements and swapping them
    // if they are in the wrong order.
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        swapped = true;
      }
    }
  }
}

int main() {
  // Declare and initialize the array to be sorted.
  int array[] = {11, 100, -5, 5};

  // Get the size of the array.
  int size = sizeof(array) / sizeof(array[0]);

  // Print the array before sorting.
  printf("Before sort: array = {");
  for (int i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  }
  printf("}\n");

  // Sort the array.
  bubbleSort(array, size);

  // Print the array after sorting.
  printf("After sort: array = {");
  for (int i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  }
  printf("}\n");

  return 0;
}
/*
Program Outputs:
Before sort: array = {10, 2, 3, 1, }
After sort: array = {1, 2, 3, 10, }

Before sort: array = {11, 100, -5, 5, }
After sort: array = {-5, 5, 11, 100, }
*/