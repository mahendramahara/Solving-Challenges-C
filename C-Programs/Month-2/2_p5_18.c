//Write a C program to read  five Subject marks and find the average

#include <stdio.h>

int main(){
	float m,e,f,c,mp,avg;
	printf("======================= Average of 5 Subject ======================"); 
	printf("\n Enter the marks of Mathematics : ");
	scanf("%f",&m);
	printf("\n Enter the marks of English : ");
	scanf("%f",&e);
	printf("\n Enter the marks of Financial Accounting : ");
	scanf("%f",&f);
	printf("\n Enter the marks of C-Programming : ");
	scanf("%f",&c);
	printf("\n Enter the marks of Microprocessor : ");
	scanf("%f",&mp);
	avg=(m+e+f+c+mp)/5;
	printf("\n Average Marks : %.3f \n\n",avg);
	return 0;
}
