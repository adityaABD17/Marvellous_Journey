#include<stdio.h>
#include<stdlib.h>

int DiffEvOdCnt(int Arr[],int iSize)
{
    int iCnt=0,iFreqE=0,iFreqO=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iFreqE++;
        }
        else
        iFreqO++;
    }
    
    int iDiff=iFreqE-iFreqO;
    if(iDiff<0)
    {
        iDiff=-iDiff;
    }

    return iDiff;
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

    int iRet=DiffEvOdCnt(ptr,iLength);

    printf("Difference between even and odd numbers count is:\t%d.", iRet);

    free(ptr);
    return 0;
}