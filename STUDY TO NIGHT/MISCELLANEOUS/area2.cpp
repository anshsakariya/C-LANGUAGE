#include<stdio.h>
#include<math.h>  // to use sqrt() function

int main()
{
    double a, b, c, area, s;
    printf("\nEnter the sides of the triangle:\n\n");
    scanf("%lf%lf%lf", &a, &b, &c);   // lf is format specifier for double input
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n\n\n\nThe area of the Triangle calculated using Heron's formula is: %lf", area);
    return 0;
}