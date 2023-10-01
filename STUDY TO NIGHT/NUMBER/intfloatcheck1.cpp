
#include<stdio.h>
int main()
{
        float n;
        printf("Enter the number : ");
        scanf("%f", &n);
        int x = n; //typecasting float to int
        if ( x == n)
        {
                printf("The entered number is an integer\n");
        }
        else
        {
                printf("The entered number is float\n");
        }
        return 0;
}