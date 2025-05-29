// Write a program which accept number from user and display its table.

// Input : 2
// Output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

void Display(int iNo)
{ 
    int iCnt = 0;
    int mult = 0;
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        mult = iNo * iCnt;
        printf("%d\n",mult);
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}