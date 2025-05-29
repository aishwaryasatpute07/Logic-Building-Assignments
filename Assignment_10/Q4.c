// Write a program which accept number from user and return multiplication of all digits.

// Input : 2395
// Output : 270

#include<stdio.h>

int Multdigits(int iNo)
{
    int idigit = 0;
    int imult = 1;

    while(iNo != 0)
    {
        idigit = iNo % 10;

        imult = imult * idigit;

        iNo = iNo / 10;

    }

    return imult;
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iret = Multdigits(iValue);

    printf("%d\n",iret);

    return 0;
}