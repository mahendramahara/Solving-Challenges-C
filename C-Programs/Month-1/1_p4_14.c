// Write a  C program to find division of 1 integer 1 float numbers.

#include <stdio.h>

int main(){
	int a;
	float b, division;
	printf("\n ======================= DIVISION OF A INTEGER AND A FLOAT NUMBER ====================== \n"); 
	printf("\n Enter a INTEGER number [X] : "); 
	scanf("%d", &a);
	printf("\n Enter a FLOAT number [Y] : "); 
	scanf("%f", &b);
	division = a/b;
	printf("\n (%d) / (%.3f) = %.3f", a, b, division); 
	return 0;
}
