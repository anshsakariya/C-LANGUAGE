#include<stdio.h>
int main(){
    int n=10,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j>=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}