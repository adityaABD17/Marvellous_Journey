#include<stdio.h>
#include<stdlib.h>

int CheckMin(int Arr[], int iSize)
{
    int iCnt=0, iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iMin>Arr[iCnt])
        {
            iMin=Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int *ptr=NULL;
    int iLength=0, iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int *) malloc (iLength*sizeof(int));

    printf("Enter elements of the array:");
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet=CheckMin(ptr,iLength);

    printf("Minimum of the array is:\t%d",iRet);


    free(ptr);

    return 0;
}