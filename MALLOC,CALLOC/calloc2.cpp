#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("how mmany integer do you want to enter \n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("enter the value of %d elements : \n",i);
        scanf("%d",&ptr[i]);
    }
     for(int i=0;i<n;i++){
        printf(" the value of %d elements :%d \n",i,ptr[i]);
       
    }
    return 0;
}