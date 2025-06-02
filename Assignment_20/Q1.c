// accept N numbers from user and accept one another number as NO, check wheather NO is present or not.

// Input :   N:     6
//           NO:    66
//           Elements : 85 66 3 66 93 88
// Output :  TRUE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iflag = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iflag = 1;
            break;
        }
    }

    return iflag;
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bret = false;
    int *p = NULL;

    printf("enter number of elements : ");
    scanf("%d",&iSize);

    printf("enter the number which you want to count frequency : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));
     
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enetr %d elements\n ", iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bret = Check(p, iSize,iValue);

    if(bret == true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present", iValue);
    }
    free(p);

    return 0;
}