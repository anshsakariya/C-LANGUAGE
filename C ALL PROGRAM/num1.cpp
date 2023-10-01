#include<stdio.h>
int main(){
    int n,counter=0;    
    printf("enter number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        counter++;
    }
    printf("there are %d digits in your number ",counter);
    return 0;
} 