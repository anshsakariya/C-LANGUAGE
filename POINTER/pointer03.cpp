#include<stdio.h>
int main()
{
    int a=6;
    int *ptr;
    ptr= &a;
    printf("the value of variable a is %d\n",a);
    printf("the adress of variable a is %u\n",ptr);
    printf("the value of variable a is %d\n",*ptr); 
    return 0;
}