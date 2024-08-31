#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt=0,iFreq=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
       {
        iFreq++;
       }
    }
    
    return iFreq;
}

int main()
{
    int *ptr=0;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet=Frequency(ptr,iLength);

    printf("11 is present in array %d times.", iRet);

    free(ptr);
    return 0;
}