#include<stdio.h>
int main()
{
    int n, sum = 0, c, t, a;
    printf("Enter a number:  ");
    scanf("%d", &n);
    t = n;  // as need to retain the original number
    while(n != 0)
    {
        a = n%10;
        sum += a*a*a;
        n = n/10;
    }
    printf("\n\n\n\t\t\tsum = %d", sum);
    if(sum == t){
        printf("\n\n\t\t%d is an armstrong number\n", t);
    }
    else{
        printf("\n\n\t\t%d is not an armstrong number\n", t);
    }
    return 0;
}