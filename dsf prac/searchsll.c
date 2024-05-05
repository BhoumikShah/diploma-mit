#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayList() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("List elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int searchNode(int key) {
    struct Node* temp = head;
    int index = 0;
    while (temp != NULL) {
        if (temp->data == key) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1; // Return -1 if node is not found
}

int main() {
    int choice, data, key;
    int index;

    while (1) {
        printf("\n1. Create Node\n");
        printf("2. Display List\n");
        printf("3. Search Node\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                createNode(data);
                break;
            case 2:
                displayList();
                break;
            case 3:
                printf("Enter the value to search: ");
                scanf("%d", &key);
                index = searchNode(key);
                if (index != -1) {
                    printf("Node with value %d found at index %d\n", key, index);
                } else {
                    printf("Node with value %d not found in the list.\n", key);
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
