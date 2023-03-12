//     5. Write a C program to find the  area of  a scalene triangle
//     area = (s1 * s2 * sin((3.14/ 180) * angle)) / 2;

#include <stdio.h>
#include <math.h>

int main(){
	int side1, side2, angle;
	float area;
	printf("\n ======================= AREA OF A SCALENE TRIANGLE ====================== \n"); 
	printf("\n Enter the LENGTH of the FIRST side [s1] : ");
	scanf("%d", &side1);
	printf("\n Enter the LENGTH of SECOND side [s2] :  ");
	scanf("%d", &side2);
	printf("\n Enter the ANGLE [Q] : ");
	scanf("%d", &angle);
	area = (side1*side2*sin((3.14/180) * angle)) / 2;
	printf("\n The AREA of the given scalene triangle = %f", area);
	return 0;
}
