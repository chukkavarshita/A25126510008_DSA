#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void insert(int customer)
{
    if(rear==MAX-1)
        printf("Queue Full\n");
    else
    {
        if(front==-1)
            front=0;
        queue[++rear]=customer;
    }
}
void delete()
{
    if(front==-1 || front>rear)
        printf("Queue Empty\n");
    else
        printf("Served Customer: %d\n",queue[front++]);
}
void display()
{
    int i;
    if(front==-1 || front>rear)
        printf("Queue Empty\n");
    else
    {
        printf("Waiting Customers: ");
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}
int main()
{
    insert(101);
    insert(102);
    insert(103);
    insert(104);
    display();
    delete();
    display();
    return 0;
}
