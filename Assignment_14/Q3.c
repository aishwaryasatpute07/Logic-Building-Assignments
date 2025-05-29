// Accept number of rows and number of columns from user and display below pattern.

// Input :  irow = 5     icol : 5
// Output :   a  b  c  d  e
//            1  2  3  4  5
//            a  b  c  d  e 
//            1  2  3  4  5
//            a  b  c  d  e

#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= irow; i++)
    {
        int even = 1;
        char ch = 'a';
        
        for(j = 1; j <= icol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",even);
                even++;
            }
            else
            {
                printf("%c\t",ch);
                ch++;
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