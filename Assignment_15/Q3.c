// Write a program which accept number of rows and number of columns from user and display below pattern.

// Input :   irow : 5      icol : 5
// Output :   $ * * * *
//            * $ * * *
//            * * $ * *
//            * * * $ *
//            * * * * $

#include<stdio.h>

void Pattern(int irow , int icol)
{
    int i =0 , j = 0;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j<= icol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}