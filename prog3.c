#include<stdio.h>

int main()
{
    int a=10,b=20;
    int *p = &a;
    int *q = &b;


    printf("sum of a and b is: %d",*p + *q);

    return 0;
}