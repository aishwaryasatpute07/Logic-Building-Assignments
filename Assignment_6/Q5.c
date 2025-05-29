// Write a program wich accept number from user and display its table in reverse order.

#include<stdio.h>

void Display(int iNo)
{ 
    int iCnt = 0;
    int mult = 0;
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
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