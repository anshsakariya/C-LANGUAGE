#include <stdio.h>

const int MAX = 3;  
int main()
{
	int var[] = {100, 200, 300};
    int i, *ptr;

    ptr = var;

    for(i = 0; i < MAX; i++)
    {
        printf("\n\n\nAddress of var[%d] = %x ", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);

        ptr++;
    }
    return 0;
}