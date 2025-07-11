#include <stdio.h>

void display(int numbers[2][2]) {
    // Loop through rows
    for (int i = 0; i < 2; i++) {
        // Loop through columns
        for (int j = 0; j < 2; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}

void add(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    // Correct initialization for a 2x2 array
    int matrix1[2][2] = {{10, 20}, {30, 40}};
    printf("First Matrix:\n");
    display(matrix1);

    int matrix2[2][2] = {{1, 2}, {3, 4}};
    printf("Second Matrix:\n");
    display(matrix2);

    int sum[2][2];

    add(matrix1, matrix2, sum);
    printf("Sum of matrices:\n");
    display(sum);

    return 0;
}