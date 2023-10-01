#include<stdio.h>
int main(){
    char g;
    printf("enter your grade:");
    scanf("%s",&g);
    switch ((g))
    {
    case 'A':
       printf("excellent\n");
        break;
    case 'B':
       printf("keep it up\n");
        break;
    case 'C':
       printf("well done\n break keyword takes execution to exit the switch case\n");
        break;
    case 'D':
       printf("you passed\n");
        break;
     case 'F':
       printf("better luck next time\n");
        break;
    
    default:
    printf("invalid grade\n");
    }
    printf("your grade is %c\n",g);
    return 0;
} 