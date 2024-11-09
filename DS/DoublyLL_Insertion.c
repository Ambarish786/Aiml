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
    while (tail->rptr != NULL)
    {
        tail = tail -> rptr;
    }
    tail -> rptr = newnode;
    newnode -> lptr = tail;
    tail = newnode;
}

void Insert_beginning()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    
    head -> lptr = newnode;
    newnode -> rptr = head;
    head = newnode;
}

void Insert_end()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);

    tail -> rptr = newnode;
    newnode -> lptr = tail;
    newnode->rptr = NULL;
    tail = newnode;
}

void Insert_position(int count)
{
    int pos,i = 1;
    struct Node *newnode,*temp = head;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    if(pos>count + 1 || pos<= 0)
    {
        printf("Invalid");
        return;
    }

    if (pos == 1)
    {
        head -> lptr = newnode;
        newnode -> lptr = head;
        head = newnode;
        return;
    }

    while (i < pos - 1)
    {
        temp = temp -> rptr;
        i++;
    }

    newnode->lptr = temp;
    newnode->rptr = temp ->rptr;
    if (temp->rptr != NULL)
    {
        newnode->rptr->lptr = newnode;
    }
    temp->rptr = newnode;
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
    int a = 0; // Reset the count
                struct Node *temp = head; // Use a temporary pointer to iterate over the list
    
    // Count the nodes in the list
                while (temp != NULL)
                {
                     a++;
                     temp = temp->rptr;
                } 
        
    while (1)
    {
        printf("Enter\n 1: Create\n 2: display\n 3: InsertAtBeg\n 4: InsertAtEnd\n 5: InsertAtPosition\n 6: exit\n");
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
            Insert_beginning();
            break;
        case 4:
            Insert_end();
            break;
        case 5:
                Insert_position(a);
                break;
        case 6:
            exit(0);
        default:
            printf("Invalid entry");
        }
    }
    
}