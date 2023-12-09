#include <stdio.h>

void findMinMax(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The smallest element in the array is: %d\n", min);
    printf("The greatest element in the array is: %d\n", max);
}

int main() {
    int arr[] = {3, 6, 1, 8, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
