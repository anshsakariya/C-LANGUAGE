#include<stdio.h>
int fact(int n){
    int val=1;
    for(int i=n;i>1;i--){
        val=val*i;
    }
    return val;
}
int main(){
    int n;
    printf("enter the value of number for factorial calculation\n");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("the value of factorial is %d \n",factorial);
    return 0;
}