#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert an element into the hash table
void insertIntoHashTable(struct Node* hashTable[], int key, int data) {
    int index = key % 10; // Calculate the hash index
    if (hashTable[index] == NULL) {
        // If the slot is empty, insert the element
        hashTable[index] = createNode(data);
    } else {
        // If the slot is not empty, add the element to the linked list
        struct Node* temp = hashTable[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = createNode(data);
    }
}

// Function to display the hash table
void displayHashTable(struct Node* hashTable[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d->", i);
        struct Node* temp = hashTable[i];
        while (temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {94, 6, 16, 26, 46, 91};
    int hashSize = 10;
    int sizeOfArray = 6;

    // Create a hash table of given size
    struct Node* hashTable[hashSize];
    for (int i = 0; i < hashSize; i++) {
        hashTable[i] = NULL;
    }

    // Fill the elements of the array into the hash table
    for (int i = 0; i < sizeOfArray; i++) {
        insertIntoHashTable(hashTable, arr[i], arr[i]);
    }

    // Display the hash table
    displayHashTable(hashTable, hashSize);

    return 0;
}
