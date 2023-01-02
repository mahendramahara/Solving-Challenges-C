// Write a  C Program to find product of 2 integer numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= PRODUCT OF 2 INTEGERS ====================== \n"); 
	int x, y, product;
	printf("\n Enter the first INTEGER [X] : "); 
	scanf("%d", &x); 
	printf(" Enter the second INTEGER [Y] : "); 
	scanf("%d", &y); 
	product = x * y;
	printf("\n (%d) * (%d) = %d", x, y, product); 
	return 0;
}
