#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;

void createNodeAtBeginning(int info) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = info;
    temp->prev = NULL;

    if (head == NULL) {
        temp->next = NULL;
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void traverse() {
    printf("List elements: ");
    struct node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int countNodes() {
    int count = 0;
    struct node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    int choice, data;

    while (1) {
        printf("\nDoubly Linked List Menu\n");
        printf("1. Create Node (at beginning)\n");
        printf("2. Tdisplay List\n");
        printf("3. number of Nodes\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                createNodeAtBeginning(data);
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
