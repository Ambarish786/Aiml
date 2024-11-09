#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
} *top = NULL;

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

void Delete_beginning()
{
    struct Node *temp = top;
    if(top == NULL)
    {
        printf("Link is Empty");
        return;
    }
    top = top -> link;
    free(temp);
}

void Delete_end()
{
    struct Node *temp = top,*prevnode;
    while (temp -> link != NULL)
    {
        prevnode = temp;
        temp = temp -> link;
    }
    if(temp == top)
    {
        top = NULL;
        return;
    }
    prevnode -> link = NULL;

    free(temp);
}

void Deletion_position(int count)
{
    struct Node *temp = top,*nextnode;
    int pos,i = 1;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos>count || pos<=0)
    {
        printf("Invalid");
        return;
    }
    if (pos == 1)
    {
        top = top ->link;
        free(temp);
    }
    
    while (i<pos-1)
    {
        temp = temp -> link;
        i++;
    }
    nextnode = temp->link;
    temp->link = nextnode-> link;
    free(nextnode);
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
        printf("Enter\n 1: Insert\n 2: Print\n 3: DeleteAtBeginning\n 4: DeletionAtEnd\n 5: DeletionAtPosition\n 6: Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Input();
                break;
            case 2:
                display();
                break;
            case 3:
                Delete_beginning();
                break;
            case 4:
                Delete_end();
                break;
            case 5:
                Deletion_position(a);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}
