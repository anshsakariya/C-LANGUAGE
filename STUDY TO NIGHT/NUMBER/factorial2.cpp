#include<stdio.h>
int main(){
    int i,n;
    int fact=1;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %ld",n,fact);
    return 0;
}