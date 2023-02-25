// WAP in C to find whether the given number is even of odd without using else
#include <stdio.h>
int main()
{
    int num;
    printf("\n====================PROGRAM TO DETERMINE EVEN OR ODD=====================\n");
    printf("Enter a number:");
    scanf("%d", &num);
    num % 2 == 0 ? printf("The number [%d] is Even", num) : printf("The number [%d] is Odd", num);
    return 0;
}