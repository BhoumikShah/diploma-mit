#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return 1; // Item found
    }
    return 0; // Item not found
}

int main() {
    int list[] = {56, 36, 89, 57, 1, 0, 67, 59};
    int n = sizeof(list) / sizeof(list[0]);
    
    int item1 = 01, item2 = 55;
    
    printf("Item %d is %sfound in the list.\n", item1, linearSearch(list, n, item1) ? "" : "not ");
    printf("Item %d is %sfound in the list.\n", item2, linearSearch(list, n, item2) ? "" : "not ");
    
    return 0;
}
