//write a c program to find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // Check for different cases based on discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // One real root
        root1 = root2 = -b / (2*a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        // Complex (imaginary) roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\nRoot 2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
