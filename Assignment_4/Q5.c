
// Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int diff = 0;
    int sumfact1 = 0;
    int sumfact2 = 0;


    for(iCnt = 1; iCnt <iNo; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            sumfact1 = sumfact1 + iCnt;   
        }
        else
        {
            sumfact2 = sumfact2 + iCnt;    
        }

        diff = sumfact1 - sumfact2;
    }



    return diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("difference is : %d",iRet);

    return 0;
    
}