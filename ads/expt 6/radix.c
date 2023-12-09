#include <stdio.h>

// Function to perform counting sort for a particular digit (exp)
void countingSort(int arr[], int n, int exp) {
    const int radix = 10;
    int output[n];
    int count[radix];

    // Count occurrences of each digit at the current exp place
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % radix]++;

    // Update count[i] to store the position of the current digit in output[]
    for (int i = 1; i < radix; i++)
        count[i] += count[i - 1];

    // Build the output array based on digit occurrences
    for (int i = n - 1; i >= 0; i--)
        output[--count[(arr[i] / exp) % radix]] = arr[i];

    // Copy the output array to arr[] so that arr[] contains sorted numbers according to current digit
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main Radix Sort function
void radixSort(int arr[], int n) {
    int max = arr[0];

    // Find the maximum number to determine the number of digits
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Perform counting sort for every digit (exp)
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Function to display an array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    displayArray(arr, n);

    // Sorting in ascending order using Radix Sort
    radixSort(arr, n);

    printf("Array sorted in ascending order using Radix Sort: ");
    displayArray(arr, n);

    return 0;
}
