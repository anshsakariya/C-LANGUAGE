#include<stdio.h>
int main(){
    int n;
    printf("enter the name:");
    scanf("%d",&n);
    if(n>100){
        printf("number is greather than 100");
    }
    else if(n==100){
        printf("numbar is 100");
    }
    else{
        printf("number is less than 100");
    }
    return 0;
}