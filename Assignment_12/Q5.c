// Accept number of row and nmber of columns from user and display below pattern.

// Input :     irow = 4      icol = 4
// Output : 1 1 1 1
//          2 2 2 2
//          3 3 3 3
//          4 4 4 4

            
#include<stdio.h>

void Pattern(int irow, int icol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= irow; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}