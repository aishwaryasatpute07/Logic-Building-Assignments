// Write a program which accept number from user and return the count of odd digits.

// Input : 2395
// Output : 3

#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int idigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;

        if((idigit % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }

    return iCount;
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iret = CountOdd(iValue);

    printf("%d",iret);

    return 0;
}