// Write a  C program to find division of 2 integer numbers.

#include <stdio.h>

int main(){
	int a, b, division;
	printf("\n ======================= DIVISION OF 2 INTEGER NUMBERS ====================== \n"); 
	printf("\n Enter the first INTEGER number [X] : "); 
	scanf("%d", &a);
	printf("\n Enter the second INTEGER number [Y] : "); 
	scanf("%d", &b);
	division = a/b;
	printf("\n (%d) / (%d) = %d", a, b, division); 
	return 0;
}
