// WAP in C for the following expression adn print the resuls
// a+b*a+10/2*a

#include <stdio.h>
int main()
{
    printf("\n==========================SOLVING THE GIVEN EXPRESSION==========================\n");
    float a, b;
    printf("Enter the first number (a):");
    scanf("%f", &a);
    printf("Enter the first number (b):");
    scanf("%f", &b);
    printf("The result of the expression a+b*a+10/2*a is %.2f", a + b * a + 10 / 2 * a);
    return 0;
} // Main