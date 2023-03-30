//Write a C program to find the result of the following expression
//E=sqrt((2*d)/h)

#include <stdio.h>
#include <math.h>

int main(){
	printf("======================= To Find The Result of Following Expression ======================");
	float E,d,h;
	printf("\n Enter the value of d: ");
	scanf("%f",&d);
	printf("\n Enter the value of h: ");
	scanf("%f",&h);
	E = sqrt((2*d)/h);
	printf("\n E = sqrt((2*d)/h = %.3f\n\n",E);
	return 0;
}
