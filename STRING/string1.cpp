#include<stdio.h>
int main()
{
    //char str[]="ansh";
    char str[]={'d','h','y','e','y','\0'};
    char *ptr=str;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}