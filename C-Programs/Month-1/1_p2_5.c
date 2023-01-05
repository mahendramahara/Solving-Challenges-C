//Write a  C Program to find sum of 1 integer 1 float numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= Add 1 integer with 1 float ======================\n"); 
	int x;
	float y;
	printf("\n Enter the Integer [x]: "); 
	scanf("%d",&x);
	printf("\n Enter the Float [Y]: "); 
	scanf("%f",&y);
	float sum;
	sum=x+y;
	printf("\n (%d) + (%f) = %.3f\n\n",x,y,sum);
	return 0;
}
