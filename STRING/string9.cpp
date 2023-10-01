#include<stdio.h>
#include<string.h>
int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("enter the value of first string\n");
    scanf("%s", st1);
    printf("enter the value of second string character by character\n");
    fflush(stdin);   
    scanf("%c",&c); 
    while (c!='\n') 
    {
         fflush(stdin);   
         scanf("%c",&c);
         st2[i]=c;
        i++;
    }
    st2[i-1]= '\0';
    printf("the value of st1 is %s\n",st1);
    printf("the value of st2 is %s\n",st2);
    printf("strcmp for these string returns %d", strcmp(st1,st2));
    return 0;
}