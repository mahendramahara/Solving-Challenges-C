// Write a  C program to find product of 1 integer and 1float numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= PRODUCT OF A INTEGER & A FLOAT NUMBER ====================== \n"); 
	int  a;
	float b, product;
	printf("\n Enter the INTEGETER number [X] : "); 
	scanf("%d", &a);
	printf("\n Enter the FLOAT number [Y] : "); 
	scanf("%f", &b);
	product = a*b;
	printf("\n (%d) * (%.3f) = %.3f", a, b, product); 
	return 0;
}
