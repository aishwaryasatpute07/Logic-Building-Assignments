// Write a program to find odd factorial of given number.

// Input : 5
// Output : 15  (5*3*1)

// Input : -5
// Output : -15  (5*3*1)

// Input : 10
// Output : 945  (9*7*5*3*1)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int efact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            efact = efact * iCnt;
        }
    }
    return efact;
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iret = EvenFactorial(iValue);

    printf("Even Factorial of number is %d \n",iret);

    return 0;
}