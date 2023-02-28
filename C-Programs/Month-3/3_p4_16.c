// WAP in C to find the Eligiblity of Candidates

#include <stdio.h>

int main()
{
    int mMath, mPhy, mChem;
    printf("\n================================ELIGIBILITY CHECKER===========================\n\n");
    printf("Enter the marks of Mathematics:");
    scanf("%d", &mMath);
    printf("Enter the marks of Physics:");
    scanf("%d", &mPhy);
    printf("Enter the marks of Chemistry:");
    scanf("%d", &mChem);
    if ((mMath + mPhy + mChem) >= 200 || (mMath + mPhy) >= 150)
    {
        printf("You're Eligible for the Course");
    }
    else
    {
        printf("You're not Eligible for the Course");
    }
    return 0;
}