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
void reverseList() {
    struct node *current = head, *temp = NULL;

    // Traverse till the last node
    while (current != NULL) {
        // Swap next and prev pointers of the current node
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node
        current = current->prev;
    }

    // Check if list is not empty and update head pointer
    if (temp != NULL) {
        head = temp->prev;
    }
}


int main() {
    int choice, data;

    while (1) {
        printf("\nDoubly Linked List Menu\n");
        printf("1. Create Node (at beginning)\n");
        printf("2. display List\n");
        printf("3. reverse list\n");
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
                reverseList();
                printf("List reversed.\n");
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
