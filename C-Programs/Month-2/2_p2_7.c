//     On dividing x by a certain number, the quotient is y and the remainder is z. find the number.
//     (number=x-z/y)

#include <stdio.h>

int main(){
	int dividend, divisor, quotient, remainder;
	printf("\n ======================= FIND DIVISOR BASED ON DIVIDEND, QUOTIENT & REMAINDER ====================== \n"); 
	printf("\n Enter the DIVIDEND [D] : "); 
	scanf("%d", &dividend);
	printf("\n Enter the QUOTIENT [Q] : "); 
	scanf("%d", &quotient);
	printf("\n Enter the REMAINDER [R] : "); 
	scanf("%d", &remainder);
	divisor = (dividend - remainder )/quotient;
	printf("\n DIVISOR = %d", divisor); 
	return 0;
}
