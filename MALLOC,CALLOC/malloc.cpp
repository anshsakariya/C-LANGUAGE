#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    for(int i=0;i<10;i++){
        printf("enter the values of %d elements :\n",i);
        scanf("%d",&ptr[i]);
    }

    return 0;
}