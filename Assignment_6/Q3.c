// Write a program to find factorial of given number.

//Input : 5
// Output : 120 (5*4*3*2*1)

#include<stdio.h>

int Factorial(int iNo)
{ 
    int iCnt = 0;
    int fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        fact = fact * iCnt;
    }

    return fact;

}

int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iret = Factorial(iValue);

    printf("Factorial of number is %d",iret);

    return 0;
}