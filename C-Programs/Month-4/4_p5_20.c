// WAP in c to find the difference of the last two digits of the given number
#include <stdio.h>
int main()
{
    printf("/n=============================DIFFERENCE OF LAST TWO DIGITS=============================/n");
    int num, lasDig, notLasDig, a, diff;
    printf("Enter first number (num):");
    scanf("%d", &num);
    a = num;
    lasDig = num % 10;
    num /= 10;
    notLasDig = num % 10;
    diff = lasDig > notLasDig ? lasDig - notLasDig : notLasDig - lasDig;
    printf("The differende of the last 2 digits of the number %d is %d", a, diff);
    return 0;
}