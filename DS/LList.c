#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data ;
    struct Node *link;
};

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
    printf("Link part of q is %d\n", p->link->link);
    
}