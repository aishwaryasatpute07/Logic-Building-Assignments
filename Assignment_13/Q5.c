// Accept number of rows and number of columns from user and display below pattern.

// Input :  irow = 3      icol = 4
//  Output:   1 2  3  4
//            5 6  7  8
//            9 10 11 12 

#include<stdio.h>

void pattern (int irow, int icol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for(i = irow; i >= 1; i--)
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

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}