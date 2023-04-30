//     3. Write a C program to find area and perimeter of a circle. (area=∏r2 perimeter=2∏r)

#include <stdio.h>

int main(){
	printf("\n ======================= AREA & PERIMETER OF A CIRCLE ====================== \n");
	float radius, pie, area, perimeter;
	pie = 3.14159;
	printf("\n Enter the RADIUS of the circle [r] : "); 
	scanf("%f", &radius);
	area = pie*radius*radius;
	perimeter = 2*pie*radius;
	printf("\n AREA of the circle = %.3f sq. units\n PERIMETER of the circle = %.3f sq. units", area, perimeter); 
	return 0;
}
