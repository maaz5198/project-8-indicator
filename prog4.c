#include<stdio.h>

int main()
{
    int a=10,b=20;
    int *p = &a;
    int *q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    printf("\n a is: %d",a);
    printf("\n b is: %d",b);

    return 0;
}