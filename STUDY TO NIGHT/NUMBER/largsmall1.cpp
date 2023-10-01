#include<stdio.h>

int main()
{
    int n,i,a[100],big,small;
    printf("\nEnter  the number: ");
    scanf("%d", &n);
    printf("\n\nEnter the %d elements of the array: \n\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    big = a[0]; // initializing
   
    for(i = 1; i < n; i++)
    {
        if(big < a[i])   // if larger value is encountered
        {
            big = a[i]; // update the value of big
        }
    }
    printf("\n\nThe largest element is: %d", big);

    small = a[0];   // initializing
    
    for(i = 1; i < n; i++)
    {
        if(small>a[i])   // if smaller value is encountered
        {
            small = a[i];   // update the value of small
        }
    }
    printf("\n\nThe smallest element is: %d", small);
    return 0;
}