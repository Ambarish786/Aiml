#include<stdio.h>
#include<stdlib.h>

    struct node
    {
        int data;
        struct node *next;
    };

    void main()
    {
    struct node *head,*newnode,*temp;
    int count = 0;
    int choice = 0;
    head = 0;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode -> data);
        newnode -> next = 0;
        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
        temp = head;
        while (temp != 0)
        {
            printf("%d\n",temp -> data);
            temp = temp -> next;
            count++;
        }
        printf("%d", count);
        
    }