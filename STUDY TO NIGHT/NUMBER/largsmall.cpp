#include<stdio.h>
int main()
{
    int a,b;
    printf("\n\nEnter the number: \n");
    scanf("%d%d", &a, &b);

    if(a == b)
        printf("Both are equal\n");
        
    else if(a < b)
    {
        printf("\n\nThe largest number is %03d\n", b);
        printf("\nThe smallest number is %03d\n", a);
    }
    else    
    {
        printf("The largest number is %03d\n", a);
        printf("The smallest number is %03d\n", b);
    }
    return 0;
}