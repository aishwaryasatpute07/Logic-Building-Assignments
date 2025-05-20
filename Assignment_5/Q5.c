// Write a program which accept N and print first 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    int mult=1;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        mult=iCnt*iNo;
        printf("%d\n",mult);
        
    }

}

int main()
{

    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}