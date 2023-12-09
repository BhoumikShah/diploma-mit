#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; // No repeating element found
}

int main() {
    int arr[] = {1,1, 2, 3, 4, 2, 5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findFirstRepeating(arr, n);
    if (result != -1) {
        printf("The first repeating element is: %d\n", result);
    } else {
        printf("There are no repeating elements in the array.\n");
    }
    return 0;
}

