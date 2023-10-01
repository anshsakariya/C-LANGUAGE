#include<stdio.h>

int sum(int a,int b);
int main()
{
    int a=20,b=1;
    int s=sum(a,b);
    printf("sum is :%d",s);
    return 0;
}

int sum(int a,int b)
{
   return a+b;
} 
