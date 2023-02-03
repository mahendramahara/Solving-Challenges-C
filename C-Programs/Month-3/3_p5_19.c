// WAP in C to find the grades of a student if the marks are in between 0 and 100

#include <stdio.h>

int main()
{
    int m0, m1, m2, m3, m4;
    float total;
    printf("\n============================GRADE FINDER==============================\n\n");
    printf("Enter the marks of Maths:");
    scanf("%d", &m0);
    if (m0 > 100 || m0 < 0){
        printf("Invalid Input\n");
        printf("Enter the marks of Maths:");
        scanf("%d", &m0);
    };
    printf("Enter the marks of English:");
    scanf("%d", &m1);
    if (m1 > 100 || m1 < 0){
        printf("Invalid Input\n");
        printf("Enter the marks of English:");
        scanf("%d", &m1);
    };
    printf("Enter the marks of MicroProcessor:");
    scanf("%d", &m2);
    if (m2 > 100 || m2 < 0){
        printf("Invalid Input");
        printf("Enter the marks of MicroProcessor:");
        scanf("%d", &m2);
    };
    printf("Enter the marks of Financial Accounting:");
    scanf("%d", &m3);
    if (m3 > 100 || m3 < 0){
        printf("Invalid Input\n");
        printf("Enter the marks of Financial Accounting:");
        scanf("%d", &m3);
    };
    printf("Enter the marks of C-Programming:");
    scanf("%d", &m4);
    if (m4 > 100 || m4 < 0){
        printf("Invalid Input");
        printf("Enter the marks of C-Programming:");
        scanf("%d", &m4);
    };
    total = m0 + m1 + m2 + m3 + m4;
    if (total/5 >= 95){
        printf("The Obtained Grade is A+ with GPA %0.2f",(total/5)/25);
    }else if (total/5 >= 90){
        printf("The Obtained Grade is A with GPA %0.2f",(total/5)/25);
    }else if (total/5 >= 80){
        printf("The Obtained Grade is B+ with GPA %0.2f",(total/5)/25);
    }else if (total/5 >= 70){
        printf("The Obtained Grade is B with GPA %0.2f",(total/5)/25);
    }else if (total/5 >= 60){
        printf("The Obtained Grade is C+ with GPA %0.2f",(total/5)/25);
    }else if (total/5 >= 50){
        printf("The Obtained Grade is C with GPA %0.2f",(total/5)/25);
    }else if (total/5 >= 40){
        printf("The Obtained Grade is D with GPA %0.2f",(total/5)/25);
    }else{
        printf("The Obtained Grade is F with GPA %0.2f",(total/5)/25);
    }
    return 0;
}