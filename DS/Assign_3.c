#include<stdio.h>
#include<stdlib.h>

struct Node
{
     int data;
     struct Node *next;
};

struct Node *InsertOrder(int x,struct Node *first)
{
     struct Node *newnode;
     newnode = (struct Node *)malloc(sizeof(struct Node));

     if(newnode == NULL)
     {
           printf("Memory not allocated");
         return first;
     }

     newnode -> data = x;
     newnode -> next = NULL;

     if(first == NULL)
     {
         first = newnode;
         return first;
     }

     if(newnode -> data <= first -> data)
     {
         newnode -> next = first;
         first = newnode;
         return first;
     }

     struct Node *save = first;

     while(save -> next != NULL && save -> next -> data < newnode -> data)
     {
         save =  save -> next;
     }
     newnode -> next = save -> next;
     save -> next = newnode;
     return first;
 }

// void print(struct Node *first)
// {
//      struct Node *temp = first;
//      while (temp != NULL)
//           {
//          printf("%d\n",temp->data);
//          temp = temp->next;
//      }
    

// int main()
// {
//     struct Node *first = NULL;
//     first = InsertOrder(30,first);
//     first = InsertOrder(25,first);
//     first = InsertOrder(28,first);
//     print(first);
//     return 0;
// }

struct Node *InsertOrder(int x,struct Node *first)
{
     struct Node *newnode;
     newnode = (struct Node *)malloc(sizeof(struct Node));

     if(newnode == NULL)
     {
         printf("Memory not allocated");
         return first;
     }

     newnode -> data = x;
     newnode -> next = NULL;

     if(first == NULL)
     {
         first = newnode;
         return first;
     }

     if(newnode -> data <= first -> data)
     {
         newnode -> next = first;
         first = newnode;
         return first;
     }

     struct Node *save = first;

     while(save -> next != NULL && save -> next -> data < newnode -> data)
     {
         save =  save -> next;
     }
     newnode -> next = save -> next;
     save -> next = newnode;
     return first;
}

struct Node *delete(struct Node *first,struct Node *deleteNode)
{
    if(first == NULL)
    {
        printf("Empty list");
    }

    if(deleteNode == first)
    {
        first = first -> next;
        free(deleteNode);
    }
    struct Node *temp = first;;
    struct Node *prenode = NULL;
    
    while (temp != NULL && temp != deleteNode)
    {
        prenode = temp;
        temp = temp -> next;
    }

    if(temp = NULL)
    {
        printf("Element not found");
        return first;
    }
    prenode -> next = temp -> next;
    free(temp);
    return first;
}

void print(struct Node *first)
{
    struct Node *first = NULL;
    first = InsertOrder(30,first);
    first = InsertOrder(45,first);
    first = InsertOrder(35,first);
    first = InsertOrder(36,first);
    printf("Before deletion:\n )");
    print(first);
    struct Node *deletenode = first -> next;
    first = delete(first,deletenode);
    printf("After deletion:\n ");
    print(first);

}