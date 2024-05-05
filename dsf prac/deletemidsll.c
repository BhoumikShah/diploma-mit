#include <stdio.h>
#include <stdlib.h>

// Define a structure for the node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head_ref, int new_data) {
    // Allocate memory for the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Set data for the new node
    new_node->data = new_data;

    // Since it's the last node, its next should be NULL
    new_node->next = NULL;

    // If the list is empty, make the new node the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Traverse the list to reach the last node
    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }

    // Change the next of the last node
    last->next = new_node;
}

// Function to delete a node with a given value from the linked list
void deleteNode(struct Node** head_ref, int key) {
    // If the list is empty, do nothing
    if (*head_ref == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // Keep track of previous node
    struct Node* prev = NULL;
    struct Node* current = *head_ref;

    // If the node to be deleted is the head
    if (current != NULL && current->data == key) {
        *head_ref = current->next;
        free(current);
        return;
    }

    // Traverse the list to find the node with the given key
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If the key was not found in the list
    if (current == NULL) {
        printf("Node with value %d not found in the list.\n", key);
        return;
    }

    // Unlink the node from the linked list
    prev->next = current->next;

    // Free the memory of the deleted node
    free(current);
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Ask user for input to insert nodes
    int data;
    char choice;
    do {
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        insertAtEnd(&head, data);

        printf("Do you want to enter another node? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Print the original linked list
    printf("Original linked list: ");
    printList(head);

    // Ask user for the value to delete
    int key;
    printf("Enter the value of the node you want to delete: ");
    scanf("%d", &key);

    // Delete the node with the given value
    deleteNode(&head, key);

    // Print the updated linked list
    printf("Linked list after deletion: ");
    printList(head);

    return 0;
}
