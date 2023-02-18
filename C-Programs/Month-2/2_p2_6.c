//     6. Write  a C program to calculate area and perimeter of a right angled triangle.
//     (Area=1/2*b*h perimeter=w+h+sqrt(w*w+h*h)

#include <stdio.h>
#include <math.h>
int main(){
	printf("\n ======================= AREA & PERIMETER OF A RIGHT ANGLED TRIANGLE ====================== \n"); 
	float base, height, area, perimeter;
	printf("\n Enter the BASE of the triangle [b] : "); 
	scanf("%f", &base);
	printf("\n Enter the HEIGHT of the triangle [h] : ");
	scanf("%f", &height);
	area = (base*height)*0.5;
	perimeter = (base + height) + sqrt(base*base+height*height);
	printf("\n Area = %.2f sq. units\n PERIMETER = %.2f units", area, perimeter);
	return 0;
}

