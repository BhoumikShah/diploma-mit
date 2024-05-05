#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the binary search tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Structure for keeping track of the traversal index
struct Index {
    int count;
    struct Node* result;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the binary search tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to do inorder traversal and find the node at the specified index
void inorderSearch(struct Node* root, struct Index* idx, int targetIndex) {
    if (root == NULL || idx->count >= targetIndex) {
        return;
    }

    inorderSearch(root->left, idx, targetIndex);

    idx->count++;
    if (idx->count == targetIndex) {
        idx->result = root;
        return;
    }

    inorderSearch(root->right, idx, targetIndex);
}
int searchByData(struct Node* root, int data) {
    struct Index idx = {0, -1};
    inorderSearch(root, &idx, data);
    return idx.index;
}

/*// Function to search for a node at a specific index in the binary search tree
struct Node* searchAtIndex(struct Node* root, int index) {
    struct Index idx = {0, NULL};
    inorderSearch(root, &idx, index);
    return idx.result;
}*/

// Function to display the binary search tree using inorder traversal
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int choice, data, index;

    while (1) {
        printf("\nBinary Search Tree Menu\n");
        printf("1. Insert Node\n");
        printf("2. Search Node \n");
        printf("3. Display Tree\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter data to search: ");
                scanf("%d", &data);
                index = searchByData(root, data);
                if (index != -1) {
                    printf("Node with data %d found at index %d.\n", data, index);
                } else {
                    printf("Node with data %d not found in the tree.\n", data);
                }
                break;
            case 3:
                printf("Binary Search Tree elements (inorder traversal): ");
                inorderTraversal(root);
                printf("\n");
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
