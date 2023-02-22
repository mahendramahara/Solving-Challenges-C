// WAP to determine whether a triangle is scalene or isosceles or equilateral
#include <stdio.h>

int main()
{
    float side1, side2, side3;
    printf("\n=====================EQUILATERAL || ISOSCELES || SCALENE======================\n\n");
    printf("Enter the length of Side 1 without units:");
    scanf("%d", &side1);
    printf("Enter the length of Side 2 without units:");
    scanf("%d", &side2);
    printf("Enter the length of Side 3 without units:");
    scanf("%d", &side3);
    side1 == side2 &&side1 == side3 ? printf("The Triangle is Equilateral") : side1 == side2 || side1 == side3 || side2 == side3 ? printf("The Triangle is Isosceles")
                                                                                                                                 : printf("The Triangle is Scalene");
}