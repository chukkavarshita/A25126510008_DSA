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
int countEven(struct Node* root) {
    if (root == NULL)
        return 0;
    int count = 0;
    if (root->data % 2 == 0)
        count = 1;
    return count + countEven(root->left) + countEven(root->right);
}
int main() {
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(8);
    root->left->left = createNode(2);
    root->left->right = createNode(7);
    printf("Number of even nodes = %d", countEven(root));
    return 0;
}
