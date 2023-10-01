#include<stdio.h>
int main(){
    int arr[50],i,elements,pos;
    printf("enter 5 elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter elements to insert:\n");
    scanf("%d",&elements);
    printf("at what position:\n");
    scanf("%d",&pos);
    for(i=5;i>pos;i--){
        arr[i]=arr[i-1];
        arr[i-1]=elements;
    }
    printf("the new array is :\n");
    for(i=0;i<=5;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}