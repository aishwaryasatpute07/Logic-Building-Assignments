// accept N numbers from user and return difference between frequency of even numers and odd numbers.

// Input :   N:         7
//           Elements : 85 66 3 80 93 88 90
// Output :  1 (4-3)

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int even = 0, odd= 0, diff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    diff = even - odd;
    return diff;
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

    iret = CountEven(p, iSize);

    printf("Result is %d",iret);

    free(p);

    return 0;
}