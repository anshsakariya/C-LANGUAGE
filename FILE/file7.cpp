#include<stdio.h>
int main(){
    int a,b,c;
    FILE *ptr;
    ptr = fopen("dhayana.txt","r");
    fscanf(ptr  ,"%d %d %d",&a,&b,&c);
    printf("the values of a b and c is %d %d %d ",a,b,c);
    return 0;
}
