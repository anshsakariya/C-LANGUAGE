#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:  ");
    scanf("%d",&n);

    if((n%2==0)){
        printf("\n\n\t\t %d is Even\n", n);
    }
    else{
        printf("\n\n\t\t %d is Odd\n", n);
    }
    return 0;
}