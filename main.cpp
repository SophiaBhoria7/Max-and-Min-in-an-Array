// Programmer: Sophia Bhoria
// Date: Oct 29, 2024 
// Purpose: Controls program flow, generating and analyzing a random array. 

#include <iostream>
#include <ctime>  
#include "header.h"

using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    // Seed the random number generator
    srand(time(0));

    // Generate random numbers and populate the array
    generateArray(arr, size);

    // Display the array
    cout << "Array elements: ";
    displayArray(arr, size);

    // Find and display the maximum element and its index
    findMax(arr, size);

    // Find and display the minimum element and its index
    findMin(arr, size);

    // Display the count of elements above and below the average
    belowAboveAvg(arr, size);

    return 0;
}
