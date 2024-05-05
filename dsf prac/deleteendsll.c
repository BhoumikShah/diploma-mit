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

// Function to delete the last node of the linked list
void deleteAtEnd(struct Node** head_ref) {
    // If the list is empty, do nothing
    if (*head_ref == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // If there is only one node in the list
    if ((*head_ref)->next == NULL) {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }

    // Traverse the list to reach the second-to-last node
    struct Node* second_last = *head_ref;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    // Save the reference to the last node
    struct Node* last = second_last->next;

    // Unlink the last node from the list
    second_last->next = NULL;

    // Free the memory of the last node
    free(last);
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

    // Ask user for confirmation to delete the last node
    printf("Do you want to delete the last node? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        // Delete the last node
        deleteAtEnd(&head);
        
        // Print the updated linked list
        printf("Linked list after deletion: ");
        printList(head);
    }

    return 0;
}
