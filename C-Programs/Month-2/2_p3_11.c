//     11. Write a C program to convert centimeters to meters and meters to kilometers.
//     (1 meter=100 centimeters 1 kilometer=1000 meters)


#include <stdio.h>

int main(){
	printf("\n ======================= CENTIMETER => METER => KILOMETER ====================== \n"); 
	int centimeters, meters, kilometers, option;
	printf("\n\t 1. CENTIMETER => METER"); 
	printf("\n\t 2. METER => KILOMETER");
	printf("\n\n Choose the operation [1/2] : ");
	scanf("%d", &option);
		if (option == 1) {
			printf("\n Enter the units in CENTIMETER [cm] : ");
			scanf("%d", &centimeters);
			meters = centimeters / 100;
			printf("\n %d cm = %d m.", centimeters, meters);
		} else if (option == 2) {
			printf("\n Enter the units in METERS [m] : ");
			scanf("%d", &meters);
			kilometers = meters/1000;
			printf("\n %d m = %d km", meters, kilometers);
		}
	else {
		printf("\n Invalid Input!! No operation defined on option \"%d\".", option);
	}
	return 0;
}
