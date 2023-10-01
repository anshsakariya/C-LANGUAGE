#include<stdio.h>
int main(){
    char g;
    printf("enter your grade:");
    scanf("%s",&g);
    switch ((g))
    {
    case 'A':
       printf("excellent\n");
    case 'B':
       printf("keep it up\n");
    case 'C':
       printf("well done\n break keyword takes execution to exit the switch case\n");
    case 'D':
       printf("you passed\n");
     case 'F':
       printf("better luck next time\n");
    default:
    printf("invalid grade\n");
    }
    printf("your grade is %c\n",g);
    return 0;
} 