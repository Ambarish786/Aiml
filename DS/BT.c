#include<stdio.h>
#include<stdlib.h>

struct BTNode
{
    int data;
    struct BTNode *lptr,*rptr;
};

struct BTNode *Create()
{
    int x;
    struct BTNode *newnode;
    newnode = (struct BTNode *)malloc(sizeof(struct BTNode));
    printf("Enter data: ");
    scanf("%d", &x);
    newnode->data = x;

    if (x == -1 || x == 0)
    {
        return 0;
    }

    printf("Enter left child of %d ", x);
    newnode->lptr = Create();

    printf("Enter right child of %d ", x);
    newnode->rptr = Create();

    return newnode;
}

void Inorder(struct BTNode *root)
{
    if(root == NULL)
    {
        return;
    }

    Inorder(root->lptr);
    printf("%d  ", root->data);
    Inorder(root->rptr);
}

void Preorder(struct BTNode *root)
{
    if(root == NULL)
    {
        return;
    }

    printf("%d  ", root->data);
    Preorder(root->lptr);
    Preorder(root->rptr);
}

void Postorder(struct BTNode *root)
{
    if(root == NULL)
    {
        return;
    }

    Postorder(root->lptr);
    Postorder(root->rptr);
    printf("%d  ", root->data);
}

void main()
{
    int choice;
    struct BTNode *root;
    root = Create();

    while (1)
    {
        printf("\nEnter traversal:\n 1: Preorder\n 2: Inorder\n 3: Postorder\n 4: exit\n ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Preorder(root);
            break;
        case 2:
            Inorder(root);
            break;
        case 3:
            Postorder(root);
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    
}
