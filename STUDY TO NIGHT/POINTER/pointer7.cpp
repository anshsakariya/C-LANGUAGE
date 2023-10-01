#include<stdio.h>

int func(int a, int b)  // function definition
{
    printf("\n\n a = %d \n", a);
    printf("\n\n b = %d \n", b);
}

int main()
{
    int(*fptr)(int , int);

    fptr = func;

    func(2,3);
    fptr(2,3);  // calling a function referring to pointer to a function

    return 0;
}