#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a node and insert it at the end of the circular linked list
void createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL) {
        head = newNode;
        head->next = head; // Make it circular
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head; // Make it circular
    }
}

// Function to reverse the circular linked list
void reverseList() {
    if (head == NULL || head->next == head) {
        return; // Empty list or single node
    }

    struct Node *prevNode, *currentNode, *nextNode;
    prevNode = NULL;
    currentNode = head;
    nextNode = head->next;

    // Traverse the list and reverse pointers
    do {
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
        nextNode = nextNode->next;
    } while (currentNode != head);

    // Update head to point to the last node
    head = prevNode;
}

// Function to traverse and print the circular linked list
void traverse() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Circular List elements: ");

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main() {
    int choice, data;

    while (1) {
        printf("\nCircular Linked List Menu\n");
        printf("1. Create Node (at end)\n");
        printf("2. Reverse List\n");
        printf("3. Traverse List\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                createNode(data);
                break;
            case 2:
                reverseList();
                printf("List reversed.\n");
                traverse();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
