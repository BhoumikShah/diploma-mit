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
int countNodes() {
    int count = 0;
    struct Node* temp = head;

    if (temp != NULL) {
        do {
            count++;
            temp = temp->next;
        } while (temp != head);
    }

    return count;
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
    int choice, data, pos;

    while (1) {
        printf("\nCircular Doubly Linked List Menu\n");
        printf("1. Create Node (at end)\n");
        printf("2. Traverse List\n");
        printf("3. Count Nodes\n");
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
                traverse();
                break;
            case 3:
                printf("Number of nodes: %d\n", countNodes());
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