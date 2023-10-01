#include<stdio.h>

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 50;
    ptr = &var;
    pptr = &ptr;
    printf("\n\nValue of var = %d\n\n", var);

    printf("\n\nValue available at *ptr = %d\n\n", *ptr);

    printf("\n\nValue available at **pptr = %d\n\n", **pptr);
    return 0;
}