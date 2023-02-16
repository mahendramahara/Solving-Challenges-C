//Write a program to read three integer values from the keyboard and displays the output stating that they are the sides of right-angled triangle 
//x=a*a and y=b*b and z=c*c
//if(a>b&&a>c&&(x==y+ z)) or if(b>a&&b>c&&(y== x+ z)) or if(c>a&&c>b&&z==x+y)
#include <stdio.h>

int main(){
	printf("======================= Right Angled Triangle or Not ======================"); 
	float a,b,c,x,y,z;
	printf("\n Enter the three sides of triangle : ");
	scanf("%f %f %f",&a,&b,&c);
        x=a*a; 
	y=b*b;
	z=c*c;
	if ((a>b&&a>c&&(x==y+z)) || (b>a&&b>c&&(y==x+z)) || (c>a&&c>b&&z==x+y)){
		printf("\n Triangle is Right Angled Triangle.\n\n");
	}
	else{
		printf("\n Triangle is **NOT** Right Angled Triangle.\n\n");
	}

	return 0;
}
