#include<stdio.h>
int main()
{
   int n;
   int fact=1;
   printf("Enter the number: ");
   scanf("%d", &n);
   int i = n;
   while(i) {
       fact = fact * i;
       i--;
   }
   printf("Factorial of %d is %ld", n , fact);

return 0;
}