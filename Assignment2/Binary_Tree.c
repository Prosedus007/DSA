#include <stdio.h>
#include <stdlib.h>

// Definition of a BST node
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insert(struct Node* node, int data) {
    if (node == NULL) 
        return createNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

// Function to perform inorder traversal of the BST
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to find the node with the minimum value in the BST
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Function to delete a node from the BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) 
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    
    // Initial data: 90, 70, 100, 60, 30, 25, 75, 40
    int data[] = {90, 70, 100, 60, 30, 25, 75, 40};
    int n = sizeof(data) / sizeof(data[0]);
    
    for (int i = 0; i < n; i++) {
        root = insert(root, data[i]);
    }

    printf("Inorder traversal of the Binary Search Tree:\n");
    inorder(root);
    printf("\n");

    // Inserting new data 43
    root = insert(root, 43);
    printf("\nInorder traversal after inserting 43:\n");
    inorder(root);
    printf("\n");

    // Deleting node 30
    root = deleteNode(root, 30);
    printf("\nInorder traversal after deleting 30:\n");
    inorder(root);
    printf("\n");

    return 0;
}
