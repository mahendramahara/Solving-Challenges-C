//Write a C program to Calculate Compound interest A=p(1+(r/100))^(n)
#include <math.h>
#include <stdio.h>

int main(){
	float p,r,n,A;
	printf("======================= Calculate Compound Interest ======================"); 
	printf("\n Enter the Principal : ");
	scanf("%f",&p);
	printf("\n Enter the Rate per annum : ");
	scanf("%f",&r);
	printf("\n Enter the no. of years : ");
	scanf("%f",&n);
	A=p*pow(1+(r/100),n);
	printf("\n Total Amount after %.0f year(s) : %.3f\n\n",n,A);
	return 0;
}

