//update program
#include<stdio.h>
int main(){
    int i,t,s,a[10],n,j;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("given values are:");
    for(i=0;i<n;i++){
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("\n enter the position update:");
    scanf("%d",&t);
    printf("enter the values to be update:");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(i==t){
            a[i]=s;
        }
    }
printf("insert values are is :");
for(i=0;i<n;i++){
    printf("\na[%d]=%d",i,a[i]);
}
return 0;
}