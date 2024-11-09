#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
} *top = NULL;

void Inputlist()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Elememt : ");
    scanf("%d",&newnode->data);
    newnode->link=NULL;

    if(top == NULL)
    {
        top = newnode;
        return;
    }
    newnode->link=top;
    top = newnode;
}

void printlist()
{
    struct Node *temp = top;
    if(temp == NULL)
    {
        printf("List is Empty");
        return;
    }
    while (temp != NULL)
    {
        printf("%d\n",temp -> data);
        temp = temp->link;
    }
}

void main()
{
    int value;
    while(1)
    {
        printf("Enter 1:Insert\n 2:Print\n ");
        scanf("%d",&value);

        switch (value)
        {
        case 1:
            Inputlist();
            break;
        
        case 2:
            printlist();
            break;
        case 3:
            exit(0);
            break;
        }
    }
}