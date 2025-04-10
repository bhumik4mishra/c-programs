#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node with given data
struct node* newnode(int data) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

// Function to search for a value in the BST
struct node* search(struct node* root, int d) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == d) {
        return root;
    } else if (d < root->data) {
        return search(root->left, d);
    } else {
        return search(root->right, d);
    }
}

int main() {
    // Manually creating the BST
    struct node* r = newnode(5);
    struct node* p1 = newnode(3);
    struct node* p2 = newnode(6);
    struct node* p3 = newnode(1);
    struct node* p4 = newnode(4);

    r->left = p1;
    r->right = p2;
    p1->left = p3;
    p1->right = p4;

    // Search for a value
    int key = 6;
    struct node* k = search(r, key);

    if (k != NULL) {
        printf("Found: %d\n", k->data);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
