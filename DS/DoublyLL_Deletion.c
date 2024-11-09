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

void Deletion_beginning()
{
    struct Node *temp = head;
    if(head == NULL)
    {
        printf("List is empty");
        return;
    }
    head = head->rptr;
    head->lptr = NULL;

    free(temp);
}

void Deletion_end()
{
    struct Node *temp = tail;
    if(tail == NULL)
    {
        printf("List is empty");
        return;
    }
    tail->lptr->rptr = NULL;
    tail = tail -> lptr;
    free(temp);
}

void Deletion_Position()
{
    int pos;
    int i = 1;
    struct Node *temp = head;
    if(head == NULL)
    {
        printf("List is empty");
        return;
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    while (i< pos)
    {
        temp = temp ->rptr;
        i++;
    }
    temp->lptr->rptr = temp->rptr;
    temp->rptr->lptr = tail->lptr;
    free(temp);
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
        printf("Enter\n 1: Create\n 2: display\n 3: DeletionAtBegining\n 4: DeletionAtEnd\n 5: DeletionAtPosition\n 6: exit\n");
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
            Deletion_beginning();
            break;
        case 4:
            Deletion_end();
            break;
        case 5:
            Deletion_Position();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid entry");
        }
    }
    
}