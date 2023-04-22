//     Write a C program to read the consumer number and number of units consumed and the cost per unit and print the amount to be paid.
//     (amt=num of units*cost)

#include <stdio.h>

int main(){
	printf("\n ======================= AMOUNT TO BE PAID ====================== \n"); 
	float numberOfUnits, costPerUnit, amount;
	printf("\n Enter the NUMBER OF UNITS [n] : ");
	scanf("%f", &numberOfUnits);
	printf("\n Enter the COST PER UNTIS [c] : ");
	scanf("%f", &costPerUnit);
	amount = numberOfUnits * costPerUnit;
	printf("\n Total Amount = Rs. %.2f", amount);
	return 0;
}
