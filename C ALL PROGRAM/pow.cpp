#include<stdio.h>
int main(){
    int m=2;
    int n=5;
    int val=1;
    for(int i=0;i<n;i++){
        val=val*m;
    }
    printf("the value of %d to the power %d is %d",m,n,val);
    return 0;
}