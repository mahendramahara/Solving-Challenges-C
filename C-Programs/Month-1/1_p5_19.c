// Write a  C program to find average of (1int,1float) numbers.

#include <stdio.h>

int main(){
	int a;
	float b, average;
	printf("\n ======================= AVERAGE OF AN INTEGER & AN FLOAT NUMBER ====================== \n"); 
	printf("\n Enter an integer number [X] : "); 
	scanf("%d", &a);
	printf("\n Enter an float number [Y] : "); 
	scanf("%f", &b);
	average = (a+b)/2;
	printf("\n [(%d + (%.3f)) / 2]  = %.3f", a, b, average); 
	return 0;
}
