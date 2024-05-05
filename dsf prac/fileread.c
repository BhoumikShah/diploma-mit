#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filepath[100];
    char ch;

    // Get the file location and name
    printf("Enter the location and name of the file to open: ");
    scanf("%s", filepath);

    // Open the file in read mode
    fp = fopen(filepath, "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Read and display the content of the file
    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    // Close the file
    fclose(fp);

    return 0;
}
