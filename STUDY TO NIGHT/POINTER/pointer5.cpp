#include <stdio.h>

int main()
{
    char str[100];
    char rev[100];
    char *sptr = str; // sptr stores the base address of the str
    char *rptr = rev; // rptr stores the base address of the reverse

    int i = -1;

    printf("\n\nEnter a string: ");
    scanf("%s", str);

    // storing the ending address of str in sptr
    while(*sptr)
    {
        sptr++;
        i++; // i is the index of the end location
    }

    // storing the string str in rev in reverse order
    while(i >= 0)
    {

        sptr--; 
        *rptr = *sptr;  // storing the value in sptr in rptr
        rptr++; // pointing to next location
        i--;    // decrementing the index
    }
   
    *rptr = '\0'; 
    rptr = rev; // restoring the base address of the reverse string
    while(*rptr)
    {
        *sptr = *rptr;
        sptr++;
        rptr++;
    }
    printf("\n\nReverse of the string is: %s ", str);
  
    return 0;
}