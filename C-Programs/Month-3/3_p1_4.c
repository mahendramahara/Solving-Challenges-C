//Write a C program to find all roots (real and equal, imaginary, equal roots of a quadratic equation)
#include <stdio.h>
#include <math.h>
int main(){
float a, b, c, root1, root2, discriminant, realPart, imgPart; // Declaring variables😃
    printf("Enter the coefficient of a, b and c:");
    scanf("%f %f %f", &a, &b, &c);    // Taking input from the user😎
    discriminant = b * b - 4 * a * c; // Calculating the necessary calculation to determine the nature of roots😮
    if (discriminant > 0) // If the roots are Real and different🙂
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the given quadratic equation is %0.2f and %0.2f\n\n", root1, root2);
    }
    else if (discriminant == 0)// If the roots are Real and equal😋
    { 
        root1 = root2 = -b / (2 * a);
        printf("The roots of the given quadratic equation is %0.2f and %0.2f\n\n", root1, root2);
    }
    else //If the roots are Imaginary and different😝
    {
        realPart = -b / (2 * a);
        imgPart = sqrt(-discriminant) / (2 * a);
        printf("The 1st root of the given quadratic equation is %0.2f - %0.2fi\n", realPart, imgPart);
        printf("The 2nd root of the given quadratic equation is %0.2f + %0.2fi\n\n", realPart, imgPart);
    }
    return 0;
    }
