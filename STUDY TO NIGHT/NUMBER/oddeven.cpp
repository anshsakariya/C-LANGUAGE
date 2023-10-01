#include<stdio.h>

int main()
{
    int x;
    for(x = 0; x <= 10; x++)
    {
        if(x%2==0) // if number is even
        {
            printf("\t\t\t%d is even\n",x);
        }
        else  // ! is used inside if to reverse the boolean value
            {
            printf("\t\t\t%d is odd\n",x);
    }
    }
    return 0;
}