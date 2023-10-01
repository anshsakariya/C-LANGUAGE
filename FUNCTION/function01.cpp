#include<stdio.h>
void display(); //function prototype declaration
int main()
{
    int a;
    printf("initializing display function\n");
    display();//function call
    printf("display function finished its work \n");    
    return 0;
}
//function defination
void display()
{
    printf("hello world\n");
}