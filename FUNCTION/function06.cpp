#include<stdio.h>
float ave(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    printf("ave %f",ave(a,b,c));
    return 0;
    }
float ave(int a,int b,int c)
{
    float result;
    result =(float)(a+b+c)/3;
    return result;
}