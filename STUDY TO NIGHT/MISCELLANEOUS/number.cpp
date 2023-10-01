#include<stdio.h>
#include<math.h>

// Function prototype declaration
int binary_decimal(int n); 

int main()
{
    int n;
    char c;
    printf("Enter the binary number: ");
    scanf("%d", &n);
    printf("\n\n\nThe decimal equivalent of %d is  %d\n\n", n, binary_decimal(n)); // function calling
    return 0;
}

// Definition of the function to convert binary to decimal.
int binary_decimal(int n)
{
    int decimal = 0, i = 0, rem;
    while(n != 0)
    {
        rem = n%10;  
        n = n/10; 
        decimal += rem*pow(2, i++);
    }
    return decimal; 
}