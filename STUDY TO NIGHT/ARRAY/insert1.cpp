#include<stdio.h>
int main(){
    int arr[50],i,elements;
    printf("enter 5 elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter elements to insert:\n");
    scanf("%d",&elements);
     arr[i]=elements;
    for(i=0;i<6;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}