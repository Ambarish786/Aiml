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
    struct Node *first;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = 'x';
    first->link = NULL;

    // Create the second node
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 'y';
    second->link = NULL;

    // Link the first node to the second
    first->link = second;

    // Print data from both nodes
    printf("Data in first node: %c\n", first->data);
    printf("Data in second node: %c\n", second->data);
}
