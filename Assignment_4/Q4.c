
// write a program which accept number from user and return summation of all its non factors.

#include<stdio.h>

int SumNonFact(int iNo)
{

    int iCnt = 0;
    int isum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            isum = isum + iCnt;
        }
    }
    return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("the summation is : %d",iRet);

    return 0;
}