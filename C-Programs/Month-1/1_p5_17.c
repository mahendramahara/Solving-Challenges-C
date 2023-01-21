// Write a  C program to find division of 2 float numbers.

#include <stdio.h>

int main(){
	float a, b, division;
	printf("\n ======================= DIVISION OF 2 FLOAT NUMBERS ====================== \n"); 
	printf("\n Enter the first FLOAT number [X] : "); 
	scanf("%f", &a);
	printf("\n Enter the second FLOAT number [Y] : "); 
	scanf("%f", &b);
	division = a/b;
	printf("\n (%.3f) / (%.3f) = %.3f", a, b, division); 
	return 0;
}
