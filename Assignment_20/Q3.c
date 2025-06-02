// accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO.

// Input :   N:     6
//           NO:    66
//           Elements : 85 66 3 66 93 88
// Output :  3 

#include<stdio.h>
#include<stdlib.h>


int LasttOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int index = -1;

    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            index = iCnt;        
        }
    }

    return index;
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int iret = 0;
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

    iret = LasttOcc(p, iSize,iValue);
    
    if(iret == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("first occurrence of number is %d",iret);
    }

    free(p);

    return 0;
}