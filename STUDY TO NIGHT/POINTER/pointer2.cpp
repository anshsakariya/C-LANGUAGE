#include <stdio.h>

const int MAX = 3;  // Global declaration
int main()
{
	int var[] = {100, 200, 300};
    int i, *ptr;

  
    ptr = &var[MAX-1];

	for(i = MAX; i > 0; i--)
    {
    	printf("\n\n\nAddress of var[%d] = %x ", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);

        ptr--;
	}
    return 0;
}