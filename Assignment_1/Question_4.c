
// Accept one number and check wheather is divisible by 5 or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE -1

int Check(int iNO)
{
    if((iNO % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;

    printf("enter number : \n");
    scanf("%d",&iValue);

    bret = Check(iValue);

    if(bret == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}