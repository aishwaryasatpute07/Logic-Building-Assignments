// accept N numbers from user check wheather that numbers contains 11 in it or not.

// Input :   N:         6
//           Elements : 85 66 11 80 93 88
// Output :  11 is present

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool Cheak(int Arr[], int iLength)
{
    int iCnt = 0;
    int iflag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iflag = 1;
            break;
        }
    }

    return iflag;
}
int main()
{
    int iSize = 0,  iCnt = 0;
    bool bret = false;
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

    bret = Cheak(p, iSize);

    if( bret == true)
    {
        printf("11 is present",p);
    }
    else
    {
        printf("11 is not present",p);
    }
    free(p);

    return 0;
}