//     5. What  is the least number must be subtracted from x to get the number exactly divisible by y.
//     (find remainder x%y and remainder is the least number must be subtracted)

#include <stdio.h>

int main(){
	printf("\n ======================= SUBTRACT TO MAKE THE NUMBER DIVISIBLE ====================== \n"); 
	int dividend, divisor, remainder;
	printf("\n Enter the DIVIDEND [X] : ");
	scanf("%d", &dividend);
	printf("\n Enter the DIVISOR [Y] : ");
	scanf("%d", &divisor);
	remainder = dividend % divisor;
	if (remainder==0) {
		printf("\"%d\" is exactly divisible by \"%d\".");
	} else {
		printf("\n \"%d\" must be subtracted in \"%d\" to make it divisible by \"divisor\" .", remainder, dividend, divisor);
	}
	return 0;
}
