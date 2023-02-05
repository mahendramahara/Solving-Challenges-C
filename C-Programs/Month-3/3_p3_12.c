//		An electricity board charges the following rates for the use of electricity: 
//     For the first 200 units: 80 per unit 
//     For the next 100 units: 90per unit 
//     Beyond 300 units: Rs.1.00 per unit 
//     All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs.400, then an additional surcharge of 15% of total amount is charged. Write a program to read the name of user and number of units consumed and print out the charges with names.

#include <stdio.h>

int main(){
	printf("\n ======================= ELECTRICTY METER CHARGE  ====================== \n"); 
	char name[20];
	float unitsConsumed, costPerUnit, amount, charge;
	printf("\n Enter your NAME : ");
	scanf("%s", &name);
	printf("\n Enter the Units of electricity consumed : ");
	scanf("%f", &unitsConsumed);
	if (unitsConsumed > 0 && unitsConsumed <= 200) {
		costPerUnit = 80;
		printf("\n Cost Per Unit = Rs %.0f", costPerUnit);
	} else if (unitsConsumed > 0 && unitsConsumed <= 300) {
		costPerUnit = 90;
		printf("\n Cost Per Unit = Rs %.0f", costPerUnit);
	} else if (unitsConsumed > 0 && unitsConsumed > 300) {
		costPerUnit = 100;
		printf("\n Cost Per Unit = Rs %.0f", costPerUnit);
	} else {
		printf("\n INVALID INPUT!!!");
	}
	printf("\n Meter Charge = Rs. 400");
	amount = unitsConsumed * costPerUnit;
	printf("\n Amount = Rs %.2f", amount);
	amount = amount + 400;		// 400 as the meter charge
	if (amount > 400) {
		charge = 0.15*amount;
		printf("\n Extra Charge [15 percent of %.2f] = %.2f", amount, charge);
		amount = amount + 0.15*amount;
	}
	printf("\n Total Amount = Rs. %.2f", amount);

	return 0;
}
