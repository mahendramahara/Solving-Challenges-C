#include <stdio.h>

int  main() {
	printf("\n ======================= VOWEL || CONSONANT ====================== \n"); 
	char alphabet;
	printf("\n Enter an ALPHABET : ");
	scanf("%c", &alphabet);
	if ((alphabet>= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) {
		if ((alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')) {
			printf("\n \"%c\" is a VOWEL.", alphabet);
		} else {
			printf("\n \"%c\" is a CONSTANT.", alphabet);
		}
	} else {
		printf("\n INVALID INPUT!! Please enter an ALPHABET.");
	}
}

