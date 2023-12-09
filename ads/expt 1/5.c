#include <stdio.h>

void squareOddPositioned(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) { // Check if the index is odd
            arr[i] *= arr[i]; // Square the element at the odd position
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    squareOddPositioned(arr, n);
    
    printf("Array after squaring odd-positioned elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
