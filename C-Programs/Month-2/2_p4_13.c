//     13. Write a C program to calculate the angle of a triangle if two angle are given as input.
//     (a+b+c=180)

#include <stdio.h>

int main(){
	printf("\n ======================= FIND THE THIRD ANGLE OF A TRIANGLE ====================== \n"); 
	float a,b,c;
	printf("\n Enter the first ANGLE (in degrees) [a] : ");
	scanf("%f", &a);
	printf("\n Enter the second ANGLE (in degrees) [b] : ");
	scanf("%f", &b);
	c = 180 - (a+b);
	printf("\n The third ANGLE [c] = %.2f", c); 
	return 0;
}
