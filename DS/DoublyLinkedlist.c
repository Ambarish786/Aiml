#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *lptr;
    struct Node *rptr;
} *head = NULL,*tail = NULL;


void Create()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    if (newnode == NULL)
    {
        printf("Memory not allocated");
        return;
    }
    
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->lptr = NULL;
    newnode->rptr = NULL;

    if(head == NULL)
    {
        head = tail = newnode;
        return;
    }
    while (tail ->rptr != NULL)
    {
        tail = tail -> rptr;
    }
    tail -> rptr = newnode;
    newnode -> lptr = tail;
    tail = newnode;
}

void Reverse()
{
    struct Node *current = head,*next;
    while (current!=NULL)
    {
        next = current->rptr;
        current->rptr = current->lptr;
        current->lptr = next;
        current = next;
    }
    current = head;
    head = tail;
    tail = current;
}

void display()
{
    struct Node *temp = head;
    if(head == NULL)
    {
        printf("List is empty");
        return;
    }
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp -> rptr;
    }
}

void main()
{
    int value;
    
    while (1)
    {
        printf("Enter\n 1: Create\n 2: display\n 3: Reverse\n 4: exit\n");
        scanf("%d", &value);

        switch (value)
        {
        case 1:
            Create();
            break;
        case 2:
            display();
            break;
        case 3:
            Reverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid entry");
        }
    }
    
}