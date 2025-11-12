#include<stdio.h>

int main()
{
    int *ptr;
    int a = 10;

    ptr = &a;

    printf("address of a: %u",ptr);
    printf("\n a is: %d",a);
    printf("\n a is: %d",*ptr);

    return 0;
}