#include<stdio.h>

int main()
{
    int x;
    int arr[] = {10,29,49,43,23,26};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter element to be searched:");
    scanf("%d", &x);

    for(int i = 0 ; i<=n ; i++)
    {
       if(arr[i] == x) {
            printf("element is in %d position :\n", i);
            break;
        }
        if(i ==n) {
            printf("Element not found");
        }
    }


}