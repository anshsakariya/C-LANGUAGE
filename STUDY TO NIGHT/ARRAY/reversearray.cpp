#include<stdio.h>
int main(){
    int arr[10],i,n;
    printf("enter the elements:");
    scanf("%d",&n);
    printf("enter the %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array elements in reverse :");
    for(i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}