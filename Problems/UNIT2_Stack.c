#include<stdio.h>
#include<string.h>
#define MAX 5
char stack[MAX][50];
int top=-1;
void push(char page[])
{
    if(top==MAX-1)
        printf("Stack Full\n");
    else
        strcpy(stack[++top],page);
}
void pop()
{
    if(top==-1)
        printf("No previous page\n");
    else
    {
        printf("Back from: %s\n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("No pages\n");
    else
    {
        printf("Visited pages:\n");
        for(i=top;i>=0;i--)
            printf("%s\n",stack[i]);
    }
}
int main()
{
    push("Google");
    push("YouTube");
    push("GitHub");
    push("Amazon");
    push("Leetcode");
    display();

    pop();
    pop();

    printf("\nAfter pressing Back:\n");
    display();

    return 0;
}
