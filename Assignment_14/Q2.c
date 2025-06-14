// Accept number of rows and number of columns from user and display below pattern.

// Input :  irow = 4     icol : 5
// Output :   2  4  6  8  10
//            1  3  5  7  9
//            2  4  6  8  10 
//            1  3  5  7  9

#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= irow; i++)
    {
        int even = 2;
        int odd = 1;
        
        for(j = 1; j <= icol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",even);
                even = even + 2;
            }
            else
            {
                printf("%d\t",odd);
                odd = odd + 2;
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