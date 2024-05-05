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

void insertAtBeginning(int data) {
    createNode(data);
    head = head->prev;
}
void insertAtPosition(int data, int pos) {
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }

    struct Node* temp = head;
    int count = 1;

    if (pos == 1) {
        insertAtBeginning(data);
        return;
    }

    while (temp->next != head && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head) {
        printf("Position exceeds list size.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
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
    int choice, data,pos;

    while (1) {
        printf("\nCircular Doubly Linked List Menu\n");
        printf("1. Insert Node (at beginning)\n");
                printf("2. Insert Node (at any position)\n");
    printf("3. Traverse List\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
                            case 2:
                printf("Enter data and position to insert: ");
                scanf("%d %d", &data, &pos);
                insertAtPosition(data, pos);
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
