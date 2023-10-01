#include<stdio.h>
#include<math.h>  // This is needed to use sqrt() function

int main()
{
    float a, b, c, determinant, r1, r2, real, imag;
    printf("\n\nEnter coefficients a, b and c: \n\n\n");
    scanf("%f%f%f", &a, &b, &c);

    determinant == b*b - 4*a*c; 

    if(determinant > 0)    // both roots are real
    {
        r1 = (-b + sqrt(determinant))/2*a;  // Brackets are important
        r2 = (-b - sqrt(determinant))/2*a;
        printf("\n\n\nRoots are: %.2f and %.2f ", r1, r2);
    }
    else if(determinant == 0)   // both roots are real and equal
    {
        r1 = r2 = -b/(2*a); // brackets are important
        printf("\n\n\nRoots are: %.2f and %.2f ", r1, r2);
    }
    else
    {
        real = -b/(2*a);
        imag = sqrt(-determinant)/(2*a);
        printf("\n\n\nRoots are %.2f + i%.2f and %.2f - i%.2f ", real, imag, real, imag);
    }
    return 0;
}