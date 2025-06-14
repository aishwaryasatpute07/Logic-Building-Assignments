//write a program which accept from user and display its digit in reverse order.

// Input : 2395
// Output : 5
//          9
//          3
//          2

// Input : 1018
// Output : 8
//          1
//          0
//          1

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}