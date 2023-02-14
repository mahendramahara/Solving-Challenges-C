// Write a C program to check whether given number is divisible by 5 and 11 or not.

#include <stdio.h>

int main(){
	printf("\n ======================= DIVISIBLE BY 5 & 11 || NOT ====================== \n"); 
	int number;
	printf("\n Enter a number [X] : ");
	scanf("%d", &number);
	if (number%5==0) {
		printf("\n \"%d\" is DIVISIBLE by 5.", number);
	}else {
		printf("\n \"%d\" is not DIVISIBLE by 5.", number);
	}
	if (number%11==0) {
		printf("\n \"%d\" is DIVISIBLE by 11.", number);
	}else {
		printf("\n \"%d\" is NOT divisible by 11.", number);
	}
	return 0;
}
