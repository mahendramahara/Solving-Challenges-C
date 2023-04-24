//Write a C Program to calculate area and perimeter of a triangle
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,s,are,per;
	printf("\n Enter side a in cm : ");
	scanf("%f",&a);
	printf("\n Enter side b in cm : ");
	scanf("%f",&b);
	printf("\n Enter side c in cm : ");
	scanf("%f",&c);
	s = (a+b+c)/2;
	are= sqrt(s*(s-a)*(s-b)*(s-c));
	per=a+b+c;
	printf("\n Area = %.3f sq.cm\n",are);
	printf("\n Perimeter = %.3f cm\n\n",per);
	return 0;
}
