//Write a C program to evaluate the following expression and print the results
//x=(20 || 40 ) && (10)

#include <stdio.h>

int main(){
	printf("======================= To Evaluate Following Expression ======================"); 
	int x;
	x=(20||40)&&(10);
	printf("\nx=(20 || 40 ) && (10) = %d\n\n",&x);
	return 0;
}
