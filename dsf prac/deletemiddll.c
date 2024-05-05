#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL; // Global variable to store the head of the list

// Function to create a new node and insert it at the end of the list
void createNodeAtEnd(int info) {
    // Allocate memory for the new node
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Unable to create node.\n");
        return;
    }

    // Set data and pointers of the new node
    newNode->data = info;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    struct node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Insert the new node after the last node
    current->next = newNode;
    newNode->prev = current;
}

// Function to delete a node at the specified index of the list
void deleteNodeAtIndex(int index) {
    // If the list is empty, do nothing
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // If the index is 0, delete the head node
    if (index == 0) {
        struct node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        return;
    }

    // Traverse the list to find the node at the specified index
    struct node* current = head;
    int i = 0;
    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }

    // If the index is out of range, do nothing
    if (current == NULL) {
        printf("Index out of range. Node cannot be deleted.\n");
        return;
    }

    // Update the pointers of neighboring nodes to skip over the node to be deleted
    current->prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    // Free the memory allocated for the deleted node
    free(current);
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
        printf("\n1. Create Node (at end)\n");
        printf("2. Delete Node (at specific index)\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter data to insert: ");
                scanf("%d", &data);
                createNodeAtEnd(data);
                break;
            case '2':
                printf("Enter index of node to delete: ");
                scanf("%d", &index);
                deleteNodeAtIndex(index);
                printf("Node at index %d deleted successfully.\n", index);
                break;
            case '3':
                displayList();
                break;
            case '4':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '4');

    return 0;
}
