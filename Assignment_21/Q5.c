// Accept N numbers from user and display summation of digits of each number.

// Input :   N:        6
//           Elements: 8225 665 3 76 953 858
//Output :   17 17 3 13 17 21

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt =0;
    int idigit = 0;
    int isum = 0, temp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        isum =0 ;
        while(Arr[iCnt] != 0)
        {
            idigit = Arr[iCnt] % 10;
            isum = isum + idigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("summation of digits %d are :%d\n ",iCnt+1,isum);
    }
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

    Digits(p, iSize);

    free(p);

    return 0;
}