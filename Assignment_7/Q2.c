// Accept amount in us doller and return its corresponding value in indian currency. consider 1$ as 70 rupees.

// Input : 10
// Output : 700

// Input : 3
// Output : 210

// Input : 1200
// Output : 84000

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iCnt = 0;
    int Doller = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        Doller = iCnt * 70; 
    }

    return Doller;
}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iret = DollerToINR(iValue);

    printf("value of INR is %d\n ",iret);

    return 0;
}