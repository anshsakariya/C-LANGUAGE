#include<stdio.h>
int main(){
    int arr[100],a,i,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter to delete elements from:");
    scanf("%d",&a);
    if(a>=n+1){
        printf("delete not possible");
    }
    else{
        for(i=a-1;i<n-1;i++){
            arr[i]=arr[i+1];
            printf("result array is :");
        }
    }
    for(i=0;i<n-1;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}