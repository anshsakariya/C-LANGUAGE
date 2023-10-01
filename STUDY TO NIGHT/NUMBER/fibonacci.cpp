#include<stdio.h>
int main()
{
    int num=0;
    printf("enter number:");
    scanf("%d",&num);
    int a,b,c,i=3;
    a=0;
    b=1;
    if(num==1){
        printf("%d",a);
    }
    if(num>=2){
        printf("%d\t%d",a,b);
    }
    while (i<=num)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
    
}