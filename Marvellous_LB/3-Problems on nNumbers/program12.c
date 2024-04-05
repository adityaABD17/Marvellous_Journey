#include<stdio.h>
#include<stdlib.h>

int CheckLargest(int Arr[],int iSize)
{
    int iCnt=0, iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int *ptr=NULL;
    int iLength=0, iCnt=0;

    printf("Enter number of elements you want to add:\t");
    scanf("%d",&iLength);

    ptr=(int *) malloc (iLength*sizeof(int));

    printf("Enter elements of the array:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet= CheckLargest(ptr,iLength);

    printf("Largest number of array is %d",iRet);

    free(ptr);

    return 0;
}