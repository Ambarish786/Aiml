#include<stdio.h>

void toh(int n , int L , int M , int R)
{
    if(n!=0)
    {
        toh(n-1,L,R,M);
        printf("Move from %d to %d\n",L,R);
        toh(n-1,M,L,R);
    }
}

int main()
{
    int x;
    printf("Enter number of discs:");
    scanf("%d", &x);
    toh(x,1,2,3);
}