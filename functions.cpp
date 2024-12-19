// Programmer: Sophia Bhoria
// Date: Oct 29, 2024
// Purpose: Implements functions to populate, display, and analyze an array. 

#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include "header.h"

using namespace std;

/*
Populates the array with random integers between 100 and 1000.
Parameter: arr[] The array to populate.
Parameter: size The size of the array.
Precondition: size should be a positive integer.
Postcondition: arr is filled with random integers between 100 and 1000.
*/
void generateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 901 + 100;
    }
}

/*
Displays the array elements.
Parameter: arr[] The array to display.
Parameter: size The size of the array.
Precondition: size should be a positive integer.
Postcondition: Outputs each element of the array to the console.
*/
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
Finds and displays the maximum element in the array and its index.
Parameter: arr[] The array to search in.
Parameter: size The size of the array.
Precondition: size should be a positive integer.
Postcondition: Outputs the maximum element and its index.
*/
void findMax(const int arr[], int size) {
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Maximum element is " << max << " at index " << maxIndex << endl;
}

/*
Finds and displays the minimum element in the array and its index.
Parameter: arr[] The array to search in.
Parameter: size The size of the array.
Precondition: size should be a positive integer.
Postcondition: Outputs the minimum element and its index.
*/
void findMin(const int arr[], int size) {
    int min = arr[0];
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    cout << "Minimum element is " << min << " at index " << minIndex << endl;
}

/*
Computes the average of the array and counts elements above and below average.
Parameter: arr[] The array to analyze.
Parameter: size The size of the array.
Precondition: size should be a positive integer.
Postcondition: Outputs the average and count of elements above and below the average value.
*/
void belowAboveAvg(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;

    int aboveAvg = 0, belowAvg = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average)
            aboveAvg++;
        else if (arr[i] < average)
            belowAvg++;
    }

    cout << "Average value: " << average << endl;
    cout << "Number of elements above average: " << aboveAvg << endl;
    cout << "Number of elements below average: " << belowAvg << endl;
}
