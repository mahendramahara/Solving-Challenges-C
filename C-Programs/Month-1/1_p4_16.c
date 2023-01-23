// Write a  C program to find surface area of a sphere

#include <stdio.h>

int main(){
	float pie, radius, area;
	pie = 3.14159;
	printf("\n ======================= SURFACE AREA OF A SPHERE ====================== \n"); 
	printf("\n Enter the RADIUS of the sphere [r] : "); 
	scanf("%f", &radius);
	area = 4*pie*radius*radius;
	printf("\n SURFACE AREA OF THE SPHERE = %.3f sq. units", area); 
	return 0;
}
