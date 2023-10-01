#include <stdio.h>
#include<string.h>
int main()
{
  char str[1000];
  printf("enter string:");
  scanf("%s", str);
  printf("\nString Before Reverse: %s", str);
    int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
  printf("\nString After Reverse: %s", str);
  return 0;
}
