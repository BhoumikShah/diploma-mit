#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[100];
    char ch;

    // Open the file in write mode
    printf("Enter the name of the file to open/create: ");
    scanf("%s", filename);
    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error opening/creating file.\n");
        exit(1);
    }

    // Write text to the file
    printf("Enter text to write to the file (max 100 characters):\n");
    scanf("%s", text);
    fprintf(fp, "%s", text);

    printf("Data written to file successfully.\n");

    // Close the file
    fclose(fp);

    // Open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Read and display the content of the file
    printf("File content after writing:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    // Close the file
    fclose(fp);

    return 0;
}
