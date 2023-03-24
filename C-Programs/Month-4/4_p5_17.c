//WAP in C to find the Roots of a quadratic equation;

int main(){    
    printf("=========================ROOTS FINDER==========================");
    float a, b, c, root1, root2, discriminant, realPart, imgPart;
    printf("Enter the coefficient of a, b and c:");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the given quadratic equation is %0.2f and %0.2f", root1, root2);
    }
    else if (discriminant == 0)
    { 
        root1 = root2 = -b / (2 * a);
        printf("The roots of the given quadratic equation is %0.2f and %0.2f", root1, root2);
    }
    else
    {
        realPart = -b / (2 * a);
        imgPart = sqrt(-discriminant) / (2 * a);
        printf("The 1st root of the given quadratic equation is %0.2f - %0.2fi\n", realPart, imgPart);
        printf("The 1st root of the given quadratic equation is %0.2f + %0.2fi", realPart, imgPart);
    }
    return 0;
} 