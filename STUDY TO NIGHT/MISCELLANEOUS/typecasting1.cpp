#include<stdio.h>

int main()
{
    int a, b, add, subtract, multiply;
    float divide;
    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);
    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/b;
    printf("\nAddition of the numbers = %d\n", add);
    printf("Subtraction of 2nd number from 1st = %d\n", subtract);
    printf("Multiplication of the numbers = %d\n", multiply);
    printf("Dividing 1st number from 2nd = %f\n", divide);
 
    return 0;
}