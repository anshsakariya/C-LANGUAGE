#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    int i;
    for(i=0;i<4;i++)
    {
        printf("enter number %d :",i+1);
        scanf("%d",ptr);
        ptr++;
    }
      for(i=0;i<4;i++)
    {
        printf("enter number %d  is :%d \n",i+1,marks[i]);
    
    }
return 0;   
}