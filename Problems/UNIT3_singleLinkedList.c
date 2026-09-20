#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int song;
    struct Node *next;
};
struct Node *head=NULL;
void insert(int song)
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->song=song;
    newnode->next=NULL;
    if(head==NULL)
        head=newnode;
    else
    {
        struct Node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
}
void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->song);
        temp=temp->next;
    }
}
void search(int song)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->song==song)
        {
            printf("\nSong Found");
            return;
        }
        temp=temp->next;
    }
    printf("\nSong Not Found");
}
int main()
{
    insert(101);
    insert(102);
    insert(103);
    printf("Playlist: ");
    display();
    search(102);
    return 0;
}
