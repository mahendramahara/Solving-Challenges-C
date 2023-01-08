//Write a  C Program to find s=ut+ 1/2at2

#include <stdio.h>

int main(){
	printf("\n ======================= To Find S = ut + 1/2at^2 ======================\n"); 
	float s,u,t,a;
	printf("\n Enter Accelaration in m/(s^2) [a]: "); 
	scanf("%f",&a);
	printf("\n Enter Initial Velocity in m/s [u]: "); 
	scanf("%f",&u);
	printf("\n Enter Time in second [t]: "); 
	scanf("%f",&t);
	s= (u*t) + 0.5*a*t*t;
	printf("\n Distance = %.3f m\n\n",s);
	return 0;
}
