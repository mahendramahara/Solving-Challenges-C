//Write a C program to find whether given number is positive or negative or zero

#include <stdio.h>

int main(){
	printf("======================= To Find Given Number Is Positive Negative or Zero ======================"); 
	float a;
	printf("\n Enter the Number : ");
	scanf("%f",&a);
	if (a>0){
		printf("\nThe Number (%.3f) is Positive.\n\n",a);
	}
	else if (a<0){
		printf("\nThe Number (%.3f) is Negative.\n\n",a);
	}
	else {
		printf("\n The number (%.3f) is Zero.\n\n",a);
	}
	return 0;
}
