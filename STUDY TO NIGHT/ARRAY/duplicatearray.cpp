#include<stdio.h>
int main()
{
    int i,j,n,count=0,arr[100],temp[100];
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0){
        printf("no elements inside the array:");
    }
    printf("enter elements inside the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n before remove duplicate:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    for(i=0;i<n;i++){
 for(j=0;j<count;j++)
 {
    if(arr[i]==temp[j]){
    break;
    }
 }   
 if(j==count)
 {
    temp[count]=arr[i];
    count++;
 }
    }
    printf("\n array after remove duplicates ");
    for(i=0;i<count;i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}