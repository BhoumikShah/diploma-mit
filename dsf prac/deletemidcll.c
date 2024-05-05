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

void insertAtEnd(int data) {
    createNode(data);
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
void deleteNode(int data) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;

    do {
        if (temp->data == data) {
            if (temp == temp->next) { // Only node in the list
                head = NULL;
                free(temp);
                return;
            }

            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);

            if (temp == head) {
                head = head->next;
            }
            return;
        }
        temp = temp->next;
    } while (temp != head);

    printf("Data not found in the list.\n");
}
int main() {
    int choice, data;

    while (1) {
        printf("\nCircular Doubly Linked List Menu\n");
        printf("1. Insert Node (at end)\n");
    printf("2. Delete at specific\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                createNode(data);traverse();
                break;
            case 2:
                                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(data);traverse();
                break;
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
