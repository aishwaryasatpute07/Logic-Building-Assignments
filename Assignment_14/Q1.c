// Accept number of rows and number of columns from user and display below pattern.

// Input :  irow = 4     icol : 4
// Output :   1  2  3  4
//            5  6  7  8 
//            9  10 11 12 
//            13 14 15 16

#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0, iCnt = 1;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
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