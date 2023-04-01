//     2. Write a C program to convert temparature from fahrenheit to celsius and vice versa (c=(fh-32)/1.8 and f=(c*1.8)+32

#include <stdio.h>

int main(){
	printf("\n ======================= FAHRENHEIT <=> CELSIUS ====================== \n"); 
	int  option;
	float celsius, fahrenheit;
	printf("\n\t 1. CELSIUS => FAHRENHEIT"); 
	printf("\n\t 2. FAHRENHEIT => CELSIUS"); 
	printf("\n\n Enter the operation number : "); 
	scanf("%d", &option);
	if (option == 1) {
		printf("\n Enter the CELSIUS number [c] : "); 
		scanf("%f", &celsius);
		fahrenheit = (celsius*1.8) +32;
		printf("\n [%.3f] Degree CELSIUS = [%.3f] Degree FAHRENHEIT", celsius, fahrenheit); 
	} else if (option == 2) {
		printf("\n Enter the FAHRENHEIT number [f] : "); 
		scanf("%f", &fahrenheit);
		celsius = (fahrenheit - 32) / 1.8;
		printf("\n [%.2f] Degree FAHRENHEIT = [%.2f] Degree CELSIUS", fahrenheit, celsius); 
	}else {
		printf("\n Invalid Input! No operation defined in \"%d\".", option);
	}
	return 0;
}
