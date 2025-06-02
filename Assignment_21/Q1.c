// Accept N numbers from user and return the largest number.

// Input :   N:        6
//           Elements: 85 66 3 66 93 88
//Output :   93

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt =0;
    int Max = 0;

    if((Arr == NULL) || (iLength <= 0))
    {
        printf("Invalid input");
        return -1;
    }

    Max = Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > Arr[0])
        {
            Max = Arr[iCnt];
        }
    }

    return Max;
}
int main()
{
    int iSize = 0, iret = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iret = Maximum(p, iSize);

    printf("largest element is %d",iret);

    free(p);

    return 0;
}