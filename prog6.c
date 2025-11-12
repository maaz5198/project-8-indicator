#include<stdio.h>

int main()
{
    int a;
    // int *p , **p1;

    printf("Enter Value of A : ");
    scanf("%d",&a);

    int *p = &a;
    int **p1 = &p;

    printf("\n Value of A is %d",a);
    printf("\n Value of P is %d",p);
    printf("\n Value of P1 is %d",p1);

    return 0;
}