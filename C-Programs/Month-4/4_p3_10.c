//		 Write a C program to print super market bill.			
//     __________________________________
//     Item		price	
//     Sugar	40
//     Papers	100
//     Total	140

#include <stdio.h>

int main(){
	printf("\n ======================= SUPER MARKET BILL  ====================== \n"); 
	float sugarRate, papersRate, total, sugar, papers;
	printf("\n Enter the QUANTITY of sugar [Q] : ");
	scanf("%f", &sugar);
	printf("\n Enter the RATE OF sugar [R] : ");
	scanf("%f", &sugarRate);
	printf("\n Enter the QUANTITY of papers [Q] : ");
	scanf("%f", &papers);
	printf("\n Enter the RATE OF papers [R] : ");
	scanf("%f", &papersRate);

	total = sugar*sugarRate + papers*papersRate;

	printf("\n __________________________________");
	printf("\n	Item	|	Price");
	printf("\n ----------------------------------");
	printf("\n Sugar  [%.0f]	|	%.2f", sugar, sugar*sugarRate);
	printf("\n Papers [%.0f]	|	%.2f", papers, papers*papersRate);
	printf("\n Total		|	%.2f", total);

	return 0;
}
