// WAP in C to find the smallest number amoung 3 numbers

#include <stdio.h>

int main()
{
    printf("\n============================SMALLEST AMONG THREE=============================\n");
    int num1, num2, num3;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 1st number:");
    scanf("%d", &num2);
    printf("Enter 1st number:");
    scanf("%d", &num3);
    if (num1 < num2 && num1 < num3)
    {
        printf("%d is the smallest amoung %d,%d and %d", num1, num1, num2, num3);
    }
    else if (num2 < num3 && num2 < num1)
    {
        printf("%d is the smallest amoung %d,%d and %d", num2, num1, num2, num3);
    }
    else
    {
        printf("%d is the smallest amoung %d,%d and %d", num3, num1, num2, num3);
    }

    return 0;
}