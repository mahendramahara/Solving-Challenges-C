// Write a C program to multiply given number by 4 using bitwise operators

#include <stdio.h>

int main(){
	int a, fourTimesA;
	printf("\n ======================= MULTIPLY BY 4 USING BITWISE OPERATORS ====================== \n"); 
	printf("\n Enter a number [x] : ");
	scanf("%d", &a);
	fourTimesA = a << 2;
	printf("\n 4 x %d = %d", a, fourTimesA);
	return 0;
}
