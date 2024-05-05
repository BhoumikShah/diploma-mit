#include <stdio.h>
#include <stdlib.h>

// Define a structure for the node
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the first node of the linked list
void deleteAtStart(struct Node** head_ref) {
    // If the list is empty, do nothing
    if (*head_ref == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    // Save the reference to the head node
    struct Node* temp = *head_ref;

    // Move the head pointer to the next node
    *head_ref = (*head_ref)->next;

    // Free the memory of the deleted node
    free(temp);
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

    // Insert some nodes at the beginning
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 3;
    head->next = NULL;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 6;
    second->next = NULL;
    head->next = second;

    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 9;
    third->next = NULL;
    second->next = third;

    // Print the original linked list
    printf("Original linked list: ");
    printList(head);

    // Delete the first node
    deleteAtStart(&head);

    // Print the updated linked list
    printf("Linked list after deletion: ");
    printList(head);

    return 0;
}
