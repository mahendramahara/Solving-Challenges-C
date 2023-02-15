//Write a C program to find the given number is even or odd.

#include <stdio.h>

int main(){
	printf("======================= To Find Given Number Is Odd Or Even ======================"); 
	int num;
	printf("\n Enter the Number : ");
	scanf("%d",&num);
	if (num%2==0){
		printf("\n The Number [%d] is Even.\n\n",num);
	}
	else{
		printf("\n The Number [%d] is Odd.\n\n",num);
	}
	return 0;
}
