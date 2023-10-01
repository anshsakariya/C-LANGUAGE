#include<stdio.h>
int main(){
    int arr[10],elements,i,n,pos;
    int found=0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the input array:");
   for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
   }
   printf("\n enter the elements to be deleted:");
   scanf("%d",&elements);
   for(i=0;i<n;i++){
    if(arr[i]==elements){
        found=1;
        pos=i;
        break;
    }
   }
   if(found==1)
   {
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
   }
   else{
    printf("elements %d is not found in the array",elements);
   }
  printf("results array is :");
  for(i=0;i<n-1;i++){
    printf("%d ",arr[i]);
  }
return 0;
}