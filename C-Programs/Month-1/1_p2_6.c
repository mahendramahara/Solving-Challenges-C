//Write a  C Program to find subtract of two integer numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= Subtraction OF 2 INTEGER NUMBERS ======================\n"); 
	int x,y;
	printf("\n Enter the First Integer [x]: "); 
	scanf("%d",&x);
	printf("\n Enter the Second Integer [Y]: "); 
	scanf("%d",&y);
	int diff;
	diff=x-y;
	printf("\n (%d) - (%d) = %d\n\n",x,y,diff);
	return 0;
}
