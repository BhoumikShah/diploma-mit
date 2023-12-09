#include <stdio.h>

// Function to perform Selection Sort in descending order
void selectionSortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >arr[maxIndex])// IMPORTANT:change the sign to make it ascending 
            {
                // Update maxIndex if a larger element is found
                maxIndex = j;
            }
        }

        // Swap elements to move the maximum to the current position
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

// Function to display an array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {500, -20, 30, 14, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    displayArray(arr, n);

    // Sorting in descending order using Selection Sort
    selectionSortDesc(arr, n);

    printf("Array sorted in descending order using Selection Sort: ");
    displayArray(arr, n);

    return 0;
}
