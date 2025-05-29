// write a programwhich accept number from user and 
// if number is less than 50 then print small , 
// if it is greater than 50 and less than 100 then print medium , 
// if it is greater than 100 then print large.

// Input : 75
// Output : Medium

#include<stdio.h>

void Number(int iNo)
{
    int inum = 0;

    if(iNo < 0)
    {
        printf("Invalid input");
        return ;
    }

    if(iNo <= 50)
    {
        printf("number is small");
    }
    if((iNo > 50) && (iNo <= 100))
    {
        printf("number is medium ");
    }
    else if(iNo > 100)
    {
        printf("number is large");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}