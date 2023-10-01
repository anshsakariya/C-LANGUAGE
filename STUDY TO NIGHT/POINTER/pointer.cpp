#include <stdio.h>
int main()
{
    int var = 24;   
    int *p;
    p = &var;  
    printf("\n\nAddress of var variable is: %x \n\n", &var);
    printf("\n\nAddress stored in pointer variable p is: %x", p);
    printf("\n\nValue of var variable or the value stored at address p is   %d ", *p);
    return 0;
    }