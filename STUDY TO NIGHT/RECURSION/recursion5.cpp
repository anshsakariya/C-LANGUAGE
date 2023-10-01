#include<stdio.h>
int sumOfDigit(int num);

int main()
{
    int num, sum;
    
    printf("Enter a number:\t");
    scanf("%d", &num);
    sum = sumOfDigit(num);
    printf("The sum of digits of %d is: %2d", num, sum);
    return 0;
}

int sumOfDigit(int num)
{
    int s, a;
    s = s + (num%10);
    a = num/10;
    if(a > 0)
    {
        sumOfDigit(a);
    }
    return s;
}