// WAP in C to check whether a triangle is valid or invalid
#include <stdio.h>

int main()
{
    int ang1, ang2, ang3;
    printf("\n=========================Triangle Valid or Not===========================\n");
    printf("Enter the 1st angle:");
    scanf("%d", &ang1);
    printf("Enter the 2nd angle:");
    scanf("%d", &ang2);
    printf("Enter the 3rd angle:");
    scanf("%d", &ang3);
    ang1 + ang2 + ang3 == 180 ? printf("The Triangle is Valid") : printf("The Triangle is Invalid");
    return 0;
}