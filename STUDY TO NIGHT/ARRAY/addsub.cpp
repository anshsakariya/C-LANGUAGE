#include<stdio.h>
int main(){
    int i,j,m,n,a[10][10],b[10][10],sum[10][10],sub[10][10];
    printf("enter thr first matrix\n");
    scanf("%d",&n);
    printf("enter %d matrix:",n*n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the first matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("enter thr second matrix\n\n");
    scanf("%d",&m);
    printf("enter %d matrix:",m*m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("enter the second matrix");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    } 
    printf("the sum of the matrix:\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
  for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    } 
    printf("the sum of the matrix:\n");
     for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}