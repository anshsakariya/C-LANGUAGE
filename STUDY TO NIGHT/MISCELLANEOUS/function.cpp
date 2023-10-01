#include<stdio.h>
//Need to include the following statements in same manner
#define decode(m,a,i,n) m##a##i##n
#define go decode(m,a,i,n)

int go()
{
    printf("You have just executed your first program without making use of main() function!\n");

    return 0;
}