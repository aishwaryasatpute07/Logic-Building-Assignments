// accept N numbers from user and return frequency of 11 from it.

// Input :   N:         6
//           Elements : 85 11 11 80 93 88
// Output :  2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iSize = 0, iret = 0, iCnt = 0;
    int *p = NULL;

    printf("enter number of elements : ");
    scanf("%d",&iSize);

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

    iret = Frequency(p, iSize);

    printf("frequency is : %d",iret);
    free(p);

    return 0;
}