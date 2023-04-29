//Write a C Write a program to read the values of x, y and z and print the results of the following expressions in one line.
//   1. (x+y+z) / (x-y-z)
//   2. (x+y+z) / 3
//   3. (x+y) * (x-y) * (y-z)

#include <stdio.h>

int main(){
	printf("======================= Following Expressions in one line ======================"); 
	float x,y,z,a,b,c;
	printf("\n Enter the value of x : ");
	scanf("%f",&x);
	printf("\n Enter the value of y : ");
	scanf("%f",&y);
	printf("\n Enter the value of z : ");
	scanf("%f",&z);
	a=(x+y+z)/(x-y-z);
	b=(x+y+z)/3;
	c=(x+y)*(x-y)*(y-z);
	printf("\n(%.3f+%.3f+%.3f)/(%.3f-%.3f-%.3f) = %.3f",x,y,z,x,y,z,a);
	printf("\n(%.3f+%.3f+%.3f)/3 = %.3f",x,y,z,b);
	printf("\n(%.3f+%.3f)*(%.3f-%.3f)*(%.3f-%.3f) = %.3f\n\n",x,y,x,y,y,z,c);
	return 0;
}
