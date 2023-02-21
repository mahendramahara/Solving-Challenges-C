// WAP in c to find the values of x1 and x2
#include <stdio.h>

int main()
{
    printf("\n============================COMPUTE X1 AND X2==============================\n\n");
    int a, b, c, d, m, n, x1, x2, eqn;
    printf("Enter the value of coeffiecient of x1 of line one:");
    scanf("%d", &a);
    printf("Enter the value of coeffiecient of x2 of line one:");
    scanf("%d", &b);
    printf("Enter the value of line one:");
    scanf("%d", &m);
    printf("Enter the value of coeffiecient of x1 of line two:");
    scanf("%d", &c);
    printf("Enter the value of coeffiecient of x2 of line two:");
    scanf("%d", &d);
    printf("Enter the value of line two:");
    scanf("%d", &n);
    eqn = a * d - c * b;
    if (eqn == 0)
    {
        printf("The Value is infiinty");
    }
    else
    {
        x1 = (m * d - b * n) / eqn;
        x2 = (n * a - m * c) / eqn;
        printf("The value of x1 is %d \nThe value of x2 is %d", x1, x2);
    }
    return 0;
}