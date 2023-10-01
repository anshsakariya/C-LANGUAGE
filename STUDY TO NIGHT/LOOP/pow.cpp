#include<stdio.h>
int main()
{
    int n, exp, exp1;
    long long int value = 1;

    printf("Enter the number and its exponential:\n\n");
    scanf("%d%d",&n, &exp);

    exp1 = exp;   // storing original value for future use

    // same as while((--exp)!=-1)
    while(exp-- > 0)
    {
        value = value*n; // multiply n to itself exp times
    }

    printf("\n\n %d^%d = %lld\n\n", n, exp1, value);
    return 0;
}