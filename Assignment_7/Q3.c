// Write a program to find even factorial of given number.

// Input : 5
// Output : 8  (4*2)

// Input : -5
// Output : 8  (4*2)

// Input : 10
// Output : 3840  (10*8*6*4*2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int efact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
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