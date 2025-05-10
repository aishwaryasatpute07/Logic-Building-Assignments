
// Accept number from user and check wheather number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    #
    if (iNo / 2 == 0)
    {
        return TRUE;
    }
    else if(iNo / 2 != 0)
    {
        return FALSE;
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;

    printf("enter number : ");
    scanf("%d",&iValue);

    bret = ChkEven(iValue);

    printf("number is ",bret);

    return 0;

}
  
