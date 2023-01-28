//Write a  C Program to find sum of 2 integer numbers.
#include <stdio.h>

int main(){
	printf("\n ======================= SUM OF 2 INTEGER NUMBERS ======================\n"); 
	int x,y;
	printf("\n Enter the First Integer [x]: "); 
	scanf("%d",&x);
	printf("\n Enter the Second Integer [Y]: "); 
	scanf("%d",&y);
	int sum;
	sum=x+y;
	printf("\n (%d) + (%d) = %d\n\n",x,y,sum);
	return 0;
}
