#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filepath[100];
    char text[100];

    // Get the file location and name
    printf("Enter the location and name of the file to create: ");
    scanf("%s", filepath);

    // Open the file in write mode
    fp = fopen(filepath, "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    // Write text to the file
    printf("Enter text to write to the file (max 100 characters):\n");
    scanf("%s", text);
    fprintf(fp, "%s", text);

    printf("Data written to file successfully.\n");

    // Close the file
    fclose(fp);

    return 0;
}
