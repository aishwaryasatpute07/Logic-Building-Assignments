// write a program which accept number from user and return difference between summation of even digits abd summation of odd digits.

// Input : 2395
// Output : -15 (2-17)

#include<stdio.h>

int CountDiff(int iNo)
{
    int idigit = 0;
    int evensum = 0;
    int oddsum = 0;
    int Diff = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;

        if((idigit % 2) != 0)
        {
            oddsum = oddsum + idigit;
        }
        else
        {
            evensum = evensum + idigit;
        }

        Diff = oddsum - evensum;

        iNo = iNo / 10;

    }

    return Diff;
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iret = CountDiff(iValue);

    printf("%d",iret);

    return 0;
}
