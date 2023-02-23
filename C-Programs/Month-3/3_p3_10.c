// Write a C program to check whether given character is alphabet, digit or special character.

#include <stdio.h>

int main(){
	char character;
	printf("\n ======================= ALPHABET || DIGIT || SPECIAL CHARACTER ====================== \n"); 
	printf("\n Enter a CHARACTER : "); 
	scanf("%c", &character);
	if ((character >= 'a' && character <= 'z') || (character >='A' && character <= 'Z')) {
		printf("\n \"%c\" is a ALPHABET.", character);
	} else if (character >= '0' && character <= '9') {
		printf("\n \"%c\" is a NUMBER.", character);
	} else {
		printf("\n \"%c\" is a SPECIAL CHARACTER.", character);
	}
	return 0;
}
/* 
	Area = pie * r^2
	1. declare pie, area, rad	
	define pie
	Read rad
	area = pie * rad *rad
	print AREA = area
 * */
