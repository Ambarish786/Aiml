#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data ;
    struct Node *link;
};

void Insert_End(struct Node *p,int data)
{
    struct Node *q,*temp;
    q = p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> link = NULL;

    while (q ->link)
    {
        q = q -> link;
    }
    q -> link = temp;   
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

    Insert_End(p,32);
    printf("%d",p->link->link->link->data);
}