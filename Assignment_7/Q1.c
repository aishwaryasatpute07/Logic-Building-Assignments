//Write a program which accept number from user and display below pattern.

// Input : 5
// Output : * * * * * # # # # #

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt<=iNo ; iCnt++)
    {
        if(iCnt < 0)
        {
            printf("*\t");
        }
        else if(iCnt > 0)
        {
            printf("#\t");
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}