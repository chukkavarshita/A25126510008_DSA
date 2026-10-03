
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node {
    int id;
    char name[50];
    struct Node *prev, *next;
};
struct Node *head = NULL;
void insertEnd(int id, char name[]) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)                      
        head = newNode;
    else 
    {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void insertBeginning(int id, char name[]) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}
void deleteSong(int id) {
    struct Node *temp = head;
    while (temp != NULL && temp->id != id)
        temp = temp->next;
    if (temp == NULL) 
    {
        printf("Song not found\n");
        return;
    }
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    free(temp);
    printf("Song deleted\n");
}
void displayForward() {
    struct Node *temp = head;
    while (temp != NULL) 
    {
        printf("%d %s\n", temp->id, temp->name);
        temp = temp->next;
    }
}
void displayBackward() {
    struct Node *temp = head;
    if (temp == NULL)
        return;
    while (temp->next != NULL)
        temp = temp->next;
    while (temp != NULL) 
    {
        printf("%d %s\n", temp->id, temp->name);
        temp = temp->prev;
    }
}
int main() {
    int ch, id;
    char name[50];
    while (1) 
    {
        printf("\n1.Insert Beginning\n2.Insert End\n3.Delete Song\n4.Forward\n5.Backward\n6.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                scanf("%d", &id);
                scanf(" %49[^\n]", name);
                insertBeginning(id, name);
                break;
            case 2:
                scanf("%d", &id);
                scanf(" %49[^\n]", name);
                insertEnd(id, name);
                break;
            case 3:
                scanf("%d", &id);
                deleteSong(id);
                break;
            case 4:
                displayForward();
                break;
            case 5:
                displayBackward();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
