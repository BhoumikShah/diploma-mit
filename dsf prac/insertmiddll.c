#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL; // Global variable to store the head of the list

// Function to create a new node and insert it at the specified index of the list
void createNodeAtIndex(int info, int index) {
    // Allocate memory for the new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Unable to create node.\n");
        return;
    }

    // Set data and pointers of the new node
    newNode->data = info;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (index == 0) {
        // Inserting at the beginning
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    } else {
        struct node* current = head;
        int i = 0;
        // Traverse the list to find the node at the (index - 1) position
        while (current != NULL && i < index - 1) {
            current = current->next;
            i++;
        }
        if (current == NULL) {
            printf("Index out of range. Node cannot be inserted.\n");
            free(newNode);
            return;
        }

        // Insert the new node after the current node
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }
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
    int data, index;
    char choice;

    do {
        printf("\n1. Create Node (at specific index)\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter index to insert at: ");
                scanf("%d", &index);
                createNodeAtIndex(data, index);
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
