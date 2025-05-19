
// write a program which accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{ 
    int iCnt = 0;

    int mult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        mult = mult * iCnt;
    }

    return mult;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("the multiplication is: %d",iRet);

    return 0;

}