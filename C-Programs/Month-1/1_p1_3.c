//Write a  C program to find product of 2 float numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= Product of 2 float numbers ======================\n"); 
	float x,y;
	printf("\n Enter the First Float [x]: "); 
	scanf("%f",&x);
	printf("\n Enter the Second Float [Y]: "); 
	scanf("%f",&y);
	float pro;
	pro=x*y;
	printf("\n (%f) * (%f) = %.3f\n\n",x,y,pro);
	return 0;
}
