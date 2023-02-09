//Write a C program to find the whether the given number is divisible by 5 or not

#include <stdio.h>

int main(){
	printf("======================= Given Number is Divisible by 5 or Not ======================"); 
	int num;
	printf("\n Enter the INTEGER Number : ");
	scanf("%d",&num);
	if (num%5==0){
		printf("\n The Number [%d] is Divisible by 5.\n\n",num);
	}
	else{
		printf("\n The Number [%d] is NOT Divisible by 5.\n\n",num);
	}

	return 0;
}
