// Accept number of rows and number of columns from user and display below pattern.

// Input :  irow = 3      icol = 4
//  Output:    A A A A A
//             B B B B B
//             C C C C C


#include<stdio.h>

void pattern (int irow, int icol)
{
    int i = 0;
    int j = 0;
    char ch ='A';

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {    
            printf("%c\t",ch);      
        }
        printf("\n");
        ch++;
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