//Write a  C program to find volume of a cube.

#include <stdio.h>
int main(){
	printf("\n ======================= Volume of a cube ======================\n"); 
	float l;
	printf("\n Enter the length in cm [l]: "); 
	scanf("%f",&l);
	float vol;
	vol = l * l * l;
	printf("\n Volume of Cube = %.3f cubic cm.\n\n",vol);
	return 0;
}
