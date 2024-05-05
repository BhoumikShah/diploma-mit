#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (head == NULL) {
        newNode->prev = newNode;
        newNode->next = newNode;
        head = newNode;
    } else {
        struct Node* temp = head->prev;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = head;
        head->prev = newNode;
    }
}

void deleteAtBeginning() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = head;
    if (head->next == head) { // Only one node in the list
        head = NULL;
    } else {
        head = head->next;
        head->prev = temp->prev;
        temp->prev->next = head;
    }
    free(temp);
}

void traverse() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("List elements: ");

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    int choice, data;

    while (1) {
        printf("\nCircular Doubly Linked List Menu\n");
        printf("1. Insert Node (at end)\n");
        printf("2. Delete Node (at beginning)\n");
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
                deleteAtBeginning();
                printf("Node at beginning deleted successfully.\n");
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
