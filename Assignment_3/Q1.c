// write program which accept one number from  user and print that number of even numbers on screen

#include <stdio.h>
void PrintEven(int iNo)
{
    if (iNo > 0)
    {
        int i = 0;
        for (i = 1; i <= iNo * 2; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter numbers\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}