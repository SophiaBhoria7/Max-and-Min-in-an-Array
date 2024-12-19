// Programmer: Sophia Bhoria
// Date: Oct 29, 2024
// Purpose: Defines function prototypes for array operations and analysis. 

#ifndef HEADER_H
#define HEADER_H

// Function to populate array with random integers
void generateArray(int arr[], int size);

// Function to display elements in the array
void displayArray(const int arr[], int size);

// Function to find and display the maximum element in the array and its index
void findMax(const int arr[], int size);

// Function to find and display the minimum element in the array and its index
void findMin(const int arr[], int size);

// Function to compute average and display count of elements above and below average
void belowAboveAvg(const int arr[], int size);

#endif
