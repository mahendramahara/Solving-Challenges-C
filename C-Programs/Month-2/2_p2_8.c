//     Find the sum of natural numbers 1 to n.(read n as input)
//     (use formula sum=n(n+1)/2

#include <stdio.h>

int main(){
	int sum, n;
	printf("\n ======================= SUM OF FIRST \"N\" NATURAL NUMBERS ====================== \n"); 
	printf("\n Enter the nth number [n] : ");
	scanf("%d", &n);
	sum = (n*(n+1))/2;
	printf("\n Sum of first %d[th] natural numbers = %d", n, sum); 
	return 0;
}
