// Write aprogram which accepct nymber from user and return the count of digits in between 3 and 7.

// Input : 2395
// Output : 1 

// Input : 1018
// Output : 0 

// Input : 4521
// Output : 2 

#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int idigit = 0;
    int icount = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;

        if((idigit >= 3) && (idigit <= 7))
        {
            icount++;   
        }

        iNo = iNo / 10;
    }

    return icount;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("enter number :");
    scanf("%d",&iValue);

    iret = CountRange(iValue);

    printf("%d",iret);

    return 0;

}