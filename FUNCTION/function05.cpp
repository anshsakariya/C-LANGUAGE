#include<stdio.h>
int fact(int x);
int main()
{
    int a = 4;
    printf("the value of factorial %d is %d",a,fact(a));
    return 0;
}
int fact(int x)
{
    printf("calling factorial %d\n",x);
    if(x==1 || x==0)
    {
        return 1;
    }
    else{
        return x *fact(x-1);
    }
}