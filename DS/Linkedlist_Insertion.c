#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
} *top = NULL;

void Insert_Beginning()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct  Node));
    printf("Enter data u want to insert: ");
    scanf("%d", &newnode->data);

    newnode -> link = top;
    top = newnode;
}

void Insert_End()
{
    struct Node *newnode,*temp;
    newnode = (struct Node *)malloc(sizeof(struct Node ));
    printf("Enter data u want to insert: ");
    scanf("%d", &newnode->data);

    newnode->link = NULL;
    temp = top;
    if(top == NULL)
    {
        newnode -> link = top;
        top = newnode;
        return;
    }
    while (temp -> link != NULL)
    {
        temp = temp -> link;
    }
    temp -> link = newnode;
}

void Insert_Pos(int count)
{
    int pos, i =1;
    struct Node *newnode,*temp = top;
    newnode = (struct Node *)malloc(sizeof(struct Node ));
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    
    if(pos > count || pos<=0)
    {
        printf("Invalid");
        return;
    }
    while(i < pos -1)
    {
        temp = temp->link;
        i++;
    }
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    newnode->link = temp -> link;
    temp->link = newnode;
}

void Input() {
    struct Node *newnode, *temp;
    newnode = (struct Node *)malloc(sizeof(struct Node));

    if (newnode == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("Enter Element: ");
    scanf("%d", &newnode->data);
    newnode->link = NULL;

    if (top == NULL) {
        top = newnode;
    } else {
        temp = top;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}

void display() {
    int count = 0;
    struct Node *temp = top;
    if (top == NULL) {
        printf("List is Empty\n");
        return;
    }
    while (temp != NULL) {
        count++;
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\nCount: %d\n", count);
}

int main() {
    int choice;
    int a;
    struct Node *temp = top;
    if(top == NULL)
    {
        printf("Link is empty\n");
    }
    while (temp != NULL)
    {
        a++;
        temp = temp->link;
    }
    
    while (1) {
        printf("Enter\n 1: Insert\n 2: display\n 3: InsertAtBeginning\n 4: InsertAtEnd\n 5: InsertAtPosition\n 6: Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Input();
                break;
            case 2:
                display();
                break;
            case 3:
                Insert_Beginning();
                break;
            case 4:
                Insert_End();
                break;
            case 5:
                Insert_Pos(a);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}
