#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node in the BST
struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL) {
        // If the tree is empty, create a new node and return it
        return createNode(value);
    }

    // If the value is less than the root's data, go to the left subtree
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    }
    // If the value is greater than the root's data, go to the right subtree
    else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    // Return the (unchanged) root pointer
    return root;
}

// Function to traverse the BST in-order (left-root-right)
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int values[] = { 8, 3, 10, 1, 6, 14, 4, 7, 13 };

    // Inserting values into the BST
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        root = insertNode(root, values[i]);
    }

    // Printing the BST in-order traversal
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
