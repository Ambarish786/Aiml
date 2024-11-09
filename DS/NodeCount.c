#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data ;
    struct Node *link;
};

void Count(struct Node *p)
{
    int count = 0;
    if(p == NULL)
    {
        printf("Linked list is empty");
    }
    struct Node *q;
    q = p;
    while (q)
    {
        count++;
        q = q->link;
    }
    printf("%d\n",count);
}

void printdata(struct Node *p)
{
    if(p == NULL)
    {
        printf("Linked list is empty");
    }
    struct  Node *q;
    q = p;
    while (q)
    {
        printf("%d\n",q->data);
        q = q->link;
    }
}

int main()
{
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p -> data = 94;
    p -> link = NULL;

    struct Node *q;
    q = (struct Node *)malloc(sizeof(struct Node));
    q -> data = 20;
    q -> link = NULL;

    p -> link = q;

    q = (struct Node *)malloc(sizeof(struct Node));
    q -> data = 47;
    q -> link = NULL;

    p -> link -> link = q;

    Count(p);
    printdata(p);
}