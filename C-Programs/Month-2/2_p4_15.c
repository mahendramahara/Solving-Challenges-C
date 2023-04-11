//     15. Write a C program to find addition of two numbers using subtraction operator.
//     Sum=a-(-b)

#include <stdio.h>

int main(){
	printf("\n ======================= ADD 2 NUMBERS USING (-) OPERATOR ====================== \n");
	float x, y, sum;
	printf("\n Enter the FIRST number [x] : ");
	scanf("%f", &x);
	printf("\n Enter the SECOND number [y] : ");
	scanf("%f", &y);
	sum = x-(-y);
	printf("(%.2f) - (-%.2f) = %.2f", x, y, sum);
	return 0;
}
