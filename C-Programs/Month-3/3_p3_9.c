// Write a C program to find whether the person is eligible to vote or not

#include <stdio.h>

int main(){
	int age;
	printf("\n ======================= ELIGIBLITY TO VOTE ====================== \n"); 
	printf("\n Enter your AGE : "); 
	scanf("%d", &age);
	if (age >=18) {
		printf("\n You are ELIGIBLE to vote!");
	} else {
		printf("\n You are NOT eligible to vote!");
	}
	return 0;
}
