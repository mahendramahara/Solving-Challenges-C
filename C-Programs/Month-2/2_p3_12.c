//     12. Write a C program to convert the given numbers of days into years, months and days.
//     (years = days/365;   //Ignoring leap year
//         	weeks = (days%365)/7;
//         	days = days- ((years*365) + (weeks*7));

#include <stdio.h>

int main(){
	int days, years, months, weeks, userDefinedDays;
	printf("\n ======================= DAYS => [YEARS / MONTHS / WEEKS / DAYS] ====================== \n"); 
	int a,b,c;
	printf("\n Enter the number of DAYS [D] : "); 
	scanf("%d", &days);
	userDefinedDays = days;
	years = days/365;
	days = days - (years*365);
	months = days/30;
	days = days - (months*30);
	weeks = days/7;
	days = days - (weeks*7);
	printf("\n Y / M / W / D = %d / %d / %d / %d\n\n", years, months, weeks, days);
	return 0;
}
