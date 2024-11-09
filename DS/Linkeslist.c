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

void Reverse()
{
    struct Node *prev=NULL,*current = top,*next=NULL;
    if(top == NULL)
    {
        printf("List cannot be reversed");
        return;
    }
    while (current != NULL)
    {
        next = current->link;
        current -> link = prev;
        prev = current;
        current = next;
    }
    top = prev;
}

int main() {
    int choice;
    while (1) {
        printf("Enter\n 1: Insert\n 2: Print\n 3: Reverse\n 4: Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Input();
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
                printf("Invalid choice, please try again.\n");
        }
    }
}
