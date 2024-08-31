#include<stdio.h>
#include<stdlib.h>

int CheckFrequency(int Arr[],int iSize,int iFrequency)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iFrequency)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0,iFrequency=0;

    printf("Enter Number of elements you want to store:");
    scanf("%d",&iLength);
    
    ptr=(int *) malloc (iLength*sizeof(int));

    printf("Enter elements of array:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter Number to check its repetation:\t");
    scanf("%d",&iFrequency);

    int iRet= CheckFrequency(ptr,iLength,iFrequency);

    printf("%d is repeated in the array %d times:",iFrequency,iRet);

    return 0;
}