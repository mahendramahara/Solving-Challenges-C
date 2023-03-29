// Write a C program to swap two numbers with bitwise operators.

#include <stdio.h>

int main(){
	int a,b;
	printf("\n ======================= SWAP 2 NUMBERS USING BITWISE OPERATORS ====================== \n"); 
	printf("\n Enter the FIRST number [X] : ");
	scanf("%d", &a);
	printf("\n Enter second number [Y] : ");
	scanf("%d", &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("\n X = %d\n Y = %d", a, b);
	return 0;
}
