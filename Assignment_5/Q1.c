// Write a program which accept number from user and print that number of $ and * on screen

#include<stdio.h>

void Pattern(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t$\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
}