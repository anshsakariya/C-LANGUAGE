#include <stdio.h>
#include <string.h>

// declaring the search function
int search(char *ptr[], char* name);

char *names[] = {
    "John",
    "Peter",
    "Thor",
    "Chris",
    "Tony",
    NULL
};

int main(void)
{
    if(search(names, "Peter") != 1) {
        printf("Peter is in the list. \n");
    }
    
    if(search(names, "Scarlett") == -1)  {
        printf("Scarlett not found. \n");
    }

    return 0;
}

// define the search method
int search(char *ptr[], char*name)
{
    register int i;

    for(i=0; ptr[i]; ++i)
    {
        if(!strcmp(ptr[i], name))  return i;

        return -1;  /* name not found */
    }
}   