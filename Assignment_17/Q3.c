// Write a program which accept number of rows and number of columns from user and display below pattern.

// Input :   irow : 4      icol : 4
// Output :   * * * *
//            *   * *
//            * *  *
//            * * * *

#include<stdio.h>

void Pattern(int irow , int icol)
{
    int i =0 , j = 0;

    for(i = 1; i <= irow; i++)
    {
        for(j = icol; j >= 1; j--)
        {
            if((i == j) || (i == 1) || (i == irow) || (j == 1) || (j == icol))
            {
                printf("*\t",j);
            }
            else 
            {
                printf(" \t");
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