// Write a  C Program to find subtract of  2 float numbers.

#include <stdio.h>

int main(){
	float x, y, difference;
	printf("\n ======================= SUBTRACT 2 FLOAT NUMBERS ====================== \n"); 
	printf("\n Enter the first FLOAT number [x] : "); 
	scanf("%f", &x);
	printf("\n Enter the second FLOAT number [y] : "); 
	scanf("%f", &y);
	difference = x - y;
	printf("\n (%.3f) - (%.3f) = %.3f", x, y, difference); 
	return 0;
}
