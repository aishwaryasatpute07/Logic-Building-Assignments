// Write a program which accept number from user and count frequency of such a digits which are less than 6.

// Input : 2395
// Output : 3

// Input : 922432
// Output : 5

#include<stdio.h>

int CountTwo(int iNo)
{
    int idigit = 0 , iCount= 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;

        if(idigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;

}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iret = CountTwo(iValue);

    printf("%d",iret);
    return 0;

}