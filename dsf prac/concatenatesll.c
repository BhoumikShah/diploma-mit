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

// Function to concatenate two singly linked lists
struct Node* concatenateLists(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) {
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }

    // Traverse the first list to reach the last node
    struct Node* current = head1;
    while (current->next != NULL) {
        current = current->next;
    }

    // Concatenate the second list to the end of the first list
    current->next = head2;

    return head1;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Function to delete the linked list
void deleteList(struct Node** head_ref) {
    struct Node* current = *head_ref;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

int main() {
    // Initialize two empty linked lists
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    // Variables for user input
    int data;

    // Input for the first list
    printf("Enter elements for the first linked list (Enter -1 to end):\n");
    do {
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        if (data != -1) {
            insertAtEnd(&head1, data);
        }
    } while (data != -1);

    // Input for the second list
    printf("Enter elements for the second linked list (Enter -1 to end):\n");
    do {
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        if (data != -1) {
            insertAtEnd(&head2, data);
        }
    } while (data != -1);

    // Concatenate the two lists
    head1 = concatenateLists(head1, head2);

    // Print the concatenated list
    printf("Concatenated list: ");
    printList(head1);

    // Free memory used by the lists
    deleteList(&head1);

    return 0;
}
