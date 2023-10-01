#include<stdio.h>

int main()
{
    int input, firstNumber, lastNumber;

    printf("Enter a number: ");
    scanf("%d", &input);

    lastNumber = input%10;
    
    firstNumber = input;

    while(firstNumber >= 10)
    {
        firstNumber /= 10;  // same as firstNumber = firstNumber/10
    }

    printf("\n\n\nAddition of first and last number is: %d + %d = %d\n", firstNumber, lastNumber, firstNumber+lastNumber);

    return 0;
}