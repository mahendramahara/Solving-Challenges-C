//Write a C program to find the given two numbers are equal or less than the other or greater than the other

#include <stdio.h>

int main(){
	printf("======================= To Compare Given Two Numbers ======================"); 
	float a,b;
	printf("\n Enter the first Number : ");
	scanf("%f",&a);
	printf("\n Enter the second Number : ");
	scanf("%f",&b);
	if (a>b){
		printf("\n %.3f is greater than %.3f.\n\n",a,b);
		printf("\n %.3f is smaller than %.3f.\n\n",b,a);
		printf("\n %.3f is not equal to %.3f.\n\n",a,b);
	}
	else if (b>a){
		printf("\n %.3f is greater than %.3f.\n\n",b,a);
		printf("\n %.3f is smaller than %.3f.\n\n",a,b);
		printf("\n %.3f is not equal to %.3f.\n\n",b,a);
	}
	else {
		printf("\n %.3f is equal to %.3f.\n\n",a,b);
	}

	return 0;
}
