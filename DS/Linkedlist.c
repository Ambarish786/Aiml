#include<stdio.h>
#include<stdlib.h>

struct Node
{
    char data;
    struct Node *link;
};

void main()
{
    struct Node *p;
    p = (struct Node*)malloc(sizeof(struct Node));
    p -> data = 'a';
    p -> link = NULL;
    printf("Data part of node is %c\n", p -> data);
    printf("Link part is %d", p -> link);
}
