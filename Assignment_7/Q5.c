// Write a program which returns difference between even factorial and odd factorial of given number.

// Input : 5
// Output : -7  (8-15)

// Input : -5
// Output : -7  (8-15)

// Input : 10
// Output : 2895  (3840-945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int evenfact = 1;
    int oddfact = 1;
    int diff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            evenfact = evenfact * iCnt;
        }
        else
        {
            oddfact = oddfact * iCnt;
        }

        diff = evenfact - oddfact;
    }

    return diff;

}
int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iret = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iret);

    return 0;
}