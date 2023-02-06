//Write a C program to find largest of the three given number

#include <stdio.h>

int main(){
	printf("======================= To Find The Largest Of Three Given Number ======================"); 
	float a,b,c;
	printf("\n Enter the first Number : ");
	scanf("%f",&a);
	printf("\n Enter the second Number : ");
	scanf("%f",&b);
	printf("\n Enter the third Number : ");
	scanf("%f",&c);
	if (a>b&&a>c){
		printf("\n The largest number is %.3f.\n\n",a);
	}
	else if (b>a&&b>c){
		printf("\n The largest number is %.3f.\n\n",b);
	}
	else {
		printf("\n The largest number is %.3f.\n\n",c);
	}
	return 0;
}
