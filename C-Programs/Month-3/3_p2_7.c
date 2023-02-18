//Write a C program to whether given year leap year or not
#include <stdio.h>

int main(){
	printf("======================= Given Year is Leap Year or Not ======================"); 
	int num;
	printf("\n Enter the Year : ");
	scanf("%d",&num);
	if (num%4==0){
		printf("\n %d is Leap Year.\n\n",num);
	}
	else{
		printf("\n %d is NOT Leap Year.\n\n",num);
	}

	return 0;
}
