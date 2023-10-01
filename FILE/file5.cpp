#include<stdio.h>
int main(){
    FILE *ptr;
    //fgetc demo for reading a file 
    //ptr = fopen("ravina.txt","r");
    //char c=fgetc(ptr);
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    //printf("the value of my character is %c\n",fgetc(ptr));
    
    ptr = fopen("hem.txt","w");
    putc('a',ptr);
    putc('n',ptr);
    putc('s',ptr);
    putc('h',ptr);
    fclose(ptr);
    return 0;
}