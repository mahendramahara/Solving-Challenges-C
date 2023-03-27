//     Write a C program for the following expression and print the results
//     x+=(x++)+(++x)+x

#include <stdio.h>

int main(){
	int a,b,x,z;
	printf("\n ======================= EVALUATE THE EXPRESSION : x+=(x++)+(++x)+x ====================== \n"); 
	printf("\n Enter a NUMBER [X] : ");
	scanf("%d", &x);
	z =x;
	a=++x;
	b=x++;
	//x+=b+a+z;
	printf("\n [%d += (%d++) + (++%d) + %d] = %d", z,z,z,z,x+=b+a+z);
	return 0;
}
