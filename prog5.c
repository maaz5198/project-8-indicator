#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr[5];

    for(int i=0;i<5;i++)
    {
        ptr[i] = &arr[i];
    }

    for(int i=0;i<5;i++)
    {
        *ptr[i] = *ptr[i] * *ptr[i];
    }

    printf("array is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}