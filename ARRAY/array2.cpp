#include<stdio.h>
int main()
{
    int i,marks[5];
    for(i=0;i<5;i++)
    {
        printf("enter number %d :",i+1);
        scanf("%d",&marks[i]);
    }
      for(i=0;i<5;i++)
    {
        printf("enter number %d  is :%d \n",i+1,marks[i]);
    
    }
return 0;   
}