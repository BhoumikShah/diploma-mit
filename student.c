// Online C compiler to run C program online
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks;
};

int main() {
    // Write C code here
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter roll no, name, and marks of student %d:\n", i + 1);
        scanf("%d", &students[i].rollNo);
        scanf("%s", students[i].name);
        scanf("%d", &students[i].marks);
    }

    for (int i = 0; i < 3; i++) {
        printf("Roll No: %d, Name: %s, Marks: %d\n", 
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}