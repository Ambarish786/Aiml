#include<stdio.h>

void toh(int n , int L , int M1 , int M2 , int R )
{
    if(n == 1)
    {
        printf("Move from %d to %d\n",L,R);
    }
    if(n == 0)
    {
        return;
    }

    toh(n-2,L,M2,R,M1);
    printf("Move from %d to %d\n",L,M2);
    printf("Move from %d to %d\n",L,R);
    printf("Move from %d to %d\n",M2,R);
    toh(n-2,M1,L,M2,R);
}

int main()
{
    int x;
    printf("Enter number of discs:");
    scanf("%d", &x);
    toh(x,1,2,3,4);
}