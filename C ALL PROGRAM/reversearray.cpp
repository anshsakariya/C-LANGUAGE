#include<stdio.h>
int reverse(int num){
    int rev =0,rem;
    while (num!=0)
    {
        rem=num%10;//last digit of num
        rev=rev*10+rem;//generate a numberfropm rev with rem as last digit
        num=num/10;

    }
    return rev;
}
int main(){
    int num=123456;
    int rev=reverse(num);
    printf("the reverse number is %d",rev);
    return 0;
}