// Write a C program to calculate Simple interest (SI=PTR/100)

#include <stdio.h>

int main(){
	printf("\n ======================= SIMPLE INTEREST ====================== \n"); 
	float principle, time, rate, si;
	printf("\n Enter the PRINCIPLE [P] : "); 
	scanf("%f", &principle);
	printf("\n Enter the TIME [T] : ");
	scanf("%f", &time);
	printf("\n Enter the RATE in year [R] : ");
	scanf("%f", &rate);
	si = (principle*time*rate)/100;
	printf("\n SIMPLE INTEREST = %.3f", si);
	return 0;
}
