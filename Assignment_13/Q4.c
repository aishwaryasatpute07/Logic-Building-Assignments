// Accept number of rows and number of columns from user and display below pattern.

// Input :  irow = 4      icol = 5
//  Output:   4 4 4 4 4
//            3 3 3 3 3
//            2 2 2 2 2
//            1 1 1 1 1

#include<stdio.h>

void pattern (int irow, int icol)
{
    int i = 0;
    int j = 0;

    for(i = irow; i >= 1; i--)
    {
        for(j = 1; j <= icol; j++)
        {    
            printf("%d\t",i);      
        }
        printf("\n");
    }
    i++;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}