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

int main() {
    // Correct initialization for a 2x2 array
    int myNumbers[2][2] = {{10, 20}, {30, 40}};

    // Call the correct function name 'display', not 'myFunction'
    display(myNumbers);

    return 0;
}