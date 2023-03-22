// Write a C program to find  the sum of last digit in given numbers.

#include <stdio.h>

int main(){
	int a, b, lastDigitOfA, lastDigitOfB, sum;
	printf("\n ======================= SUM OF LAST 2 DIGITS IN 2 NUMBERS ====================== \n"); 
	printf("\n Enter the FIRST INTEGER [X] : ");
	scanf("%d", &a);
	printf("\n Enter the SECOND INTEGER [Y] : ");
	scanf("%d", &b);
	lastDigitOfA = a%10;
	lastDigitOfB = b%10;
	sum = lastDigitOfA + lastDigitOfB;
	printf("\n %d + %d = %d", lastDigitOfA, lastDigitOfB, sum);
	return 0;
}
