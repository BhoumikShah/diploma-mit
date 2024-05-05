#include <stdio.h>
#include <stdlib.h>

// Define a structure for the node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node after a given node
void insertAfter(struct Node* prev_node, int new_data) {
    // Check if the given prev_node is NULL
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }

    // Allocate memory for the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Set data for the new node
    new_node->data = new_data;

    // Make the new node point to the next node of prev_node
    new_node->next = prev_node->next;

    // Make prev_node point to the new node
    prev_node->next = new_node;
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

    // Insert some nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 2;
    second->next = NULL;
    head->next = second;

    // Ask user for input
    int new_data, position;
    printf("Enter the data for the new node: ");
    scanf("%d", &new_data);
    printf("Enter the position after which you want to insert the new node: ");
    scanf("%d", &position);

    // Traverse the list to find the position
    struct Node* current = head;
    for (int i = 1; i < position; i++) {
        if (current == NULL) {
            printf("Invalid position\n");
            return 1;
        }
        current = current->next;
    }

    // Insert the new node after the current node
    insertAfter(current, new_data);

    // Print the linked list
    printf("Linked list: ");
    printList(head);

    return 0;
}
