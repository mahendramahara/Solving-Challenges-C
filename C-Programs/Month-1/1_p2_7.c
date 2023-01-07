//Write a  C program to find average of 2 float numbers.

#include <stdio.h>

int main(){
	printf("\n ======================= AVERAGE OF 2 FLOAT NUMBERS ======================\n"); 
	float x,y;
	printf("\n Enter the First Float [x]: "); 
	scanf("%f",&x);
	printf("\n Enter the Second Float [Y]: "); 
	scanf("%f",&y);
	float avg;
	avg=(x+y)/2;
	printf("\n ((%f) + (%f))/2 = %.3f\n\n",x,y,avg);
	return 0;
}
