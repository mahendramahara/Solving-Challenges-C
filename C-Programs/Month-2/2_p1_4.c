//      What is least number must be added to x to obtain a number exactly divisible by y. (find rem=x%y
//     Subtract remainder from y, the answer will be least number must be added)

#include <stdio.h>

int main(){
	int dividend, divisor, remainder, numberToBeAdded;
	printf("\n ======================= MAKE THE NUMBER DIVISIBLE BY ADDING LEAST NUMBER ====================== \n"); 
	printf("\n Enter the DIVIDEND [X] : "); 
	scanf("%d", &dividend);
	printf("\n Enter the DIVISOR [Y] : "); 
	scanf("%d", &divisor);
	remainder = dividend % divisor;
	if (remainder == 0) {
		printf(" %d is ALREADY Divisble by %d", dividend, divisor);
	} else {
	numberToBeAdded = divisor - remainder;
	printf("\n Adding \"%d\" will make \"%d\" exactly divisible by \"%d\".", numberToBeAdded, dividend, divisor); 
	}
	return 0;
}
