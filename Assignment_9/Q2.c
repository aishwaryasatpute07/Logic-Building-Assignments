// write a program which accept number from user and check wheather it contains 0 in it or not.

// Input : 2395
// Output : There is no zero

// Input : 1018
// Output : It contains zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkZero(int iNo)
{
    int iflag = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        if((iNo % 10) == 0)
        {
            iflag = 1;
            break;;
        }

        iNo = iNo / 10 ;
    }

    return iflag;

}
int main()
{
    int iValue = 0;
    bool bret = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bret = ChkZero(iValue);

    if(bret == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("there is no zero");
    }

    return 0;

}