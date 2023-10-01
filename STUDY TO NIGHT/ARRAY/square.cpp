#include<stdio.h>
int main()
{
    int n,i,j,a[100][100],b[100][100];
    printf("enter the number");
    scanf("%d",&n);
    printf("enter %d elements",n*n);
      for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            scanf("%d", &a[i][j]);  
        }
    }
       for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
         b[i][j]=a[i][j];    
        }
    }
    printf("originam matrix\n");
        for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            printf("%d ", a[i][j]);  
        }
        printf("\n");
    }
    printf("tranpose matrix:\n");
      for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            printf("%d ", b[i][j]);  
        }
        printf("\n");
    } 
      for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
         if(a[i][j]!=b[i][j])
         {
            printf("matrix is not symmetric\n");
         }    
        }
    }
    printf("matrix is summetric\n");
    return 0;
}