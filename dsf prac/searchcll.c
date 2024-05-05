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

int searchNode(int key) {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1;
    }

    struct Node* current = head;
    int position = 0;

    do {
        position++;
        if (current->data == key) {
            return position; // Found the node with the key
        }
        current = current->next;
    } while (current != head);

    // Node with key not found
    return -1;
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
    int choice, data, key, position;

    while (1) {
        printf("\nCircular Doubly Linked List Menu\n");
        printf("1. Insert Node (at end)\n");
        printf("2. Search Node\n");
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
                printf("Enter data to search: ");
                scanf("%d", &key);
                position = searchNode(key);
                if (position != -1) {
                    printf("Node with data %d found at position %d.\n", key, position);
                } else {
                    printf("Node with data %d not found.\n", key);
                }
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
