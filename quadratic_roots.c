// Program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    printf("Enter the coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        printf("The roots are real and equal.\n");
        r1 = -b / (2 * a);
        printf("Root: %.2f\n", r1);
    }
    else if (d > 0)
    {
        printf("The roots are real and distinct.\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f and %.2f\n", r1, r2);
    }
    else
    {
        printf("The roots are imaginary.\n");
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("Roots: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }

    return 0;
}
