#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the last number you want the sum of \n");
    scanf("%d",&n);
    //sum=1+2+3+4+5+.......+n
    for(int i=1;i<=n;i++){
    sum=sum+i;
    }
    printf("sum of  first %d natural number is %d\n",n,sum);
    return 0;
}