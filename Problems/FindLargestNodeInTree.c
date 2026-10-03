#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
int largest(struct Node* root) {
    if (root == NULL)
        return -1;
    int max = root->data;
    int l = largest(root->left);
    int r = largest(root->right);
    if (l > max)
        max = l;
    if (r > max)
        max = r;
    return max;
}
int main() {
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(2);
    root->left->right = createNode(8);
    printf("Largest node = %d", largest(root));
    return 0;
}
