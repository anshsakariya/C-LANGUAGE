#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(6,sizeof(int));
    
    for(int i=0;i<6;i++){
        printf("enter the value of %d elements : \n",i);
        scanf("%d",&ptr[i]);
    }
     for(int i=0;i<6;i++){
        printf(" the value of %d elements :%d \n",i,ptr[i]);
       
    }
    return 0;
}