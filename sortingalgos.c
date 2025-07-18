#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int percentage;
    char division[10];
};

// Get data from user
void getdata(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter roll no, name, percentage and division of student %d:\n", i + 1);
        scanf("%d", &students[i].rollNo);
        scanf("%s", students[i].name);
        scanf("%d", &students[i].percentage);
        scanf("%s", students[i].division);
    }
}

// Display all students
void display(struct Student students[], int n) {
    printf("R.No\tName\t\tPercentage\tDivision\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t\t%s\n", students[i].rollNo, students[i].name, students[i].percentage, students[i].division);
    }
}

// Bubble sort by roll number
void bubblesort(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rollNo > students[j + 1].rollNo) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Selection sort by division
void selectionsort(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[j].division, students[min_idx].division) < 0) {
                min_idx = j;
            }
        }
        temp = students[i];
        students[i] = students[min_idx];
        students[min_idx] = temp;
    }
}

// Insertion sort by percentage
void insertionsort(struct Student students[], int n) {
    struct Student key;
    int j;
    for (int i = 1; i < n; i++) {
        key = students[i];
        j = i - 1;
        while (j >= 0 && students[j].percentage > key.percentage) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

int main() {
    struct Student students[3];

    getdata(students, 3);

    printf("\nOriginal Student Information:\n");
    display(students, 3);

    printf("\nSorted by Roll Number (Bubble Sort):\n");
    bubblesort(students, 3);
    display(students, 3);

    printf("\nSorted by Percentage (Insertion Sort):\n");
    insertionsort(students, 3);
    display(students, 3);

    printf("\nSorted by Division (Selection Sort):\n");
    selectionsort(students, 3);
    display(students, 3);

    return 0;
}