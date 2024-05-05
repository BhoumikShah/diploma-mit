#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL; // Global variable to store the head of the list

// Function to create a new node and insert it at the beginning of the list
void createNodeAtBeginning(int info) {
    // Allocate memory for the new node
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed. Unable to create node.\n");
        return;
    }

    // Set data and pointers of the new node
    temp->data = info;
    temp->prev = NULL;

    if (head == NULL) {
        temp->next = NULL;
    } else {
        temp->next = head;
        head->prev = temp;
    }

    // Update the head to point to the new node
    head = temp;
}

// Function to display the elements of the doubly linked list
void displayList() {
    struct node* current = head;
    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("List elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int data;
    char choice;

    do {
        printf("\n1. Create Node (at beginning)\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter data to insert: ");
                scanf("%d", &data);
                createNodeAtBeginning(data);
                break;
            case '2':
                displayList();
                break;
            case '3':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '3');

    return 0;
}
