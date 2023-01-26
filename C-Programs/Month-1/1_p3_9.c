// Write a  C Program to find sum of 2 float numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= SUM OF 2 FLOAT NUMBERS ====================== \n"); 
	float x, y, sum;
	printf("\n Enter the first FLOAT number [x] : "); 
	scanf("%f", &x);
	printf("\n Enter the second FLOAT number [y] : ");
	scanf("%f", &y);
	sum = x + y;
	printf("\n (%.3f) + (%.3f) = %.3f", x, y, sum); 
	return 0;
}
