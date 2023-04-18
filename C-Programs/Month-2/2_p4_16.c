// Write a C program to read a character, and two integer numbers and print the ASCII value of the given character, find quotient and remainder of two given integer numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= FIND THE ASCII VALUE AND QUOTIENT AND REMAINDER ====================== \n");
	char character;
	int quotient, remainder, dividend, divisor;
	printf("\n Enter the CHARACTER [c] : ");
	scanf("%c", &character);
	printf("\n Enter the DIVIDEND [X] : ");
	scanf("%d", &dividend);
	printf("\n Enter the DIVISOR [Y] : ");
	scanf("%d", &divisor);
	quotient = dividend / divisor;
	remainder = dividend % divisor;
	printf("\n ASCII value of \"%c\" = %d\n QUOTIENT  = %d\n REMAINDER = %d\n", character, character, quotient, remainder);
	return 0;
}
