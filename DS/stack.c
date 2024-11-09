#include<stdio.h>
#include<stdlib.h>

int top = -1;
int max;
int *stack;

void push() {
            if(top == max - 1) {
                printf("Over flow");
            }
            else{
                top = top + 1;
                printf("Enter element: ");
                scanf("%d",stack + top);
            }
}

void pop() {
            if(top == -1) {
                printf("under flow");
            }
            else {
                printf("Poped element is %d",*(stack + top));
                top = top - 1;
            }
}

void display() {
    for(int i=0 ;i >=0; i--) {
        printf("%d\n",*(stack+i));
    }
}

int main() {
    printf("Enter size of stack: ");
    scanf("%d",&max);
    stack = (int*)malloc(max*sizeof(int));
    
    while(max > 0)
    {
        printf("Enter the operation: ");
        int x;
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;
        
        default:
            printf("Invalid Entry");
        }
        
    }
    
}