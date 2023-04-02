//     1. Write a C program to find the gross salary of the employee. (read Basic, Da,Hra and pf is 10% of the basic) 

#include <stdio.h>

int main(){
	printf("\n ======================= GROSS SALARY OF THE EMPLOYEE ====================== \n"); 
	float basic, da, hra, pf, grossSalary;
	printf("\n Enter the BASIC salary [b] : "); 
	scanf("%f", &basic);
	printf("\n Enter the Dearness Allowance (DR) : "); 
	scanf("%f", &da);
	printf("\n Enter the House Rent Allowance (HRA) : "); 
	scanf("%f", &hra);
	pf = basic*0.1;
	grossSalary = basic + da + hra+ pf;
	printf("\n Gross Salary = %.3f", grossSalary); 
	return 0;
}
