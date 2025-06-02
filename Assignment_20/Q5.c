// accept N numbers from user and return of all odd elements.

// Input :   N:     6
//           NO:    66
//           Elements : 15 66 3 70 10 88
// Output :  45

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int mult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            mult = mult * Arr[iCnt];        
        }
    }

    return mult;
}
int main()
{
    int iSize = 0, iCnt = 0;
    int iret = 0;
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

    iret = Product(p, iSize);
    
    printf("product is %d ",iret);

    free(p);

    return 0;
}  