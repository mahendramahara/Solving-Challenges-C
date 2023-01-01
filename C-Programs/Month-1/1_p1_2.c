//Write a  C Program to find subtract of 1 integer 1 float number.

#include <stdio.h>

int main(){
	printf("\n ======================= Subtract 1 integer with 1 float ======================\n"); 
	int x;
	float y;
	printf("\n Enter the Integer [x]: "); 
	scanf("%d",&x);
	printf("\n Enter the Float [Y]: "); 
	scanf("%f",&y);
	float dif;
	dif=x-y;
	printf("\n (%d) - (%f) = %f\n\n",x,y,dif);
	return 0;
}
