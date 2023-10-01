#include<stdio.h>
#include<string.h>
int main()
{
    char st1[45]="hello"; 
    char *st2 ="helo";
    int val = strcmp(st1, st2);
    printf("now the st1 is %d",val);
    return 0;
}