// accept N numbers from user and accept one another number as NO, return frequency of NO from it.

// Input :   N:     6
//           NO:    66
//           Elements : 85 66 3 66 93 88
// Output :  2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iSize = 0, iret = 0, iCnt = 0, iValue = 0;
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

    iret = Frequency(p, iSize,iValue);

    printf("frequency is : %d",iret);
    free(p);

    return 0;
}