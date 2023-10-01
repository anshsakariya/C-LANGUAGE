#include<stdio.h>
#include<ctype.h>//to use system defined function islower &toupper
int main(){
    char alphabet;
    printf("enter an alphabet:");
    putchar ('\n');
    alphabet=getchar();
    printf("\n reverse case of %c is :",alphabet);
    if(islower(alphabet)){
        putchar(toupper(alphabet));
    }
    else{
        printf("%c",tolower(alphabet));
    }
    return 0;
}