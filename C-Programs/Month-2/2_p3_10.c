//      Write  a C program to calculate area and perimeter of a rectangle.
//      Area=l*b
//      Perimeter=2(l+b)

#include <stdio.h>

int main(){
	printf("\n ======================= AREA & PERIMETER OF A RECTANGLE ====================== \n"); 
	float length, breadth, area, perimeter;
	printf("\n Enter the LENGTH of the rectange : "); 
	scanf("%f", &length);
	printf("\n Enter the BREADTH of the rectange : ");
	scanf("%f", &breadth);
	area = length * breadth;
	perimeter = 2*(length + breadth);
	printf("\n AREA of the rectange = %.2f sq. units\n PERIMETER of the rectange = %.2f units", area, perimeter);
	return 0;
}
