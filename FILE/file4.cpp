#include<stdio.h>
int main(){
    FILE *fptr;
    int number=45;
    fptr=fopen("dhyey.txt","w");
    fprintf(fptr,"the number is %d\n",number);
    fprintf(fptr,"thanks for using fprintf",number);
    fclose(fptr);
    return 0;
}