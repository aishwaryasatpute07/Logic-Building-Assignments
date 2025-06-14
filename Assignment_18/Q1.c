// Write a program which accept N numbers from user and return difference between summation of even elements and summation of odd lements.

// Input :     6
//elements:    85  66  3  80  93  88
// Output :    53 (234-181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int even = 0, odd = 0;
    int diff= 0;
     
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            even = even + Arr[iCnt];
        }
        else
        {
            odd = odd + Arr[iCnt];
        }

    }

    diff = even - odd;
    return diff;
}
int main()
{
    int iSize = 0, iret = 0, iCnt = 0,iLength = 0;
    int *p = NULL;
    
    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iret = Difference(p , iSize);

    printf("result is %d",iret);

    free(p);

    return 0;
}