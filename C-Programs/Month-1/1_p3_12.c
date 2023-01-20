// Write a  C Program to Swap two Numbers Using Temporary Variable

#include <stdio.h>

int main(){
	float x, y, a, b;
	printf("\n ======================= SWAP 2 NUMBERS USING TEMPORARY VARIABLE ====================== \n"); 
	printf("\n Enter the first number [X] : "); 
	scanf("%f", &x);
	printf("\n Enter the second number [Y] : "); 
	scanf("%f", &y);
	b = x;
	a = y;
	printf("\n X = %.3f \n Y = %.3f", a, b);
	return 0;
}
