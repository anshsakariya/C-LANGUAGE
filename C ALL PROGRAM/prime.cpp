#include<stdio.h>
int main(){
    int n=35;
    int isprime=1;
    int i;
        for(i=2;i*i<n;i++){
            if(n%i==0){
                isprime=0;
            }
        }
        if(isprime){
            printf("the number %d is prime\n ",n);
        }
        else{
            printf("the number %d is  not prime\n ",n);
        }
    
    
    return 0;
}