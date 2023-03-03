// WAP in cto find the result of the following expression
// Tension = ((2m1m2)/(m1+m2))*g ,where m1 and m2 are the mass of the bodies connected by a string and Tension is the force excerted on the string

#include <stdio.h>
#define G 9.816
int main()
{
    printf("\n===============================TENSION ON THE STRING=================================\n");
    float Tension, m1, m2;
    printf("Enter mass of the first body(m1):");
    scanf("%f", &m1);
    printf("Enter mass of the second body(m2):");
    scanf("%f", &m2);
    Tension = ((2 * m1 * m2) / (m1 + m1)) * G;
    printf("The Tension on the String is %.3fN", Tension);
    return 0;
} // Main