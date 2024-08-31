#include<stdio.h>
#include<stdlib.h>

int SumDiff(int Arr[],int iSize)
{
    int iCnt=0,iSumE=0,iSumO=0;
    int iDiff=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumE+=Arr[iCnt];
        }
        else
        {
            iSumO+=Arr[iCnt];
        }
    }
    iDiff=iSumE-iSumO;
    
    return iDiff;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);
    
    ptr=(int *)malloc(sizeof(int)*iLength);

    printf("Enter elements of the array:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    if(ptr==NULL)
    {
        printf("Unable to allocate memory..!");
    }

    int iRet=SumDiff(ptr,iLength);

    printf("Difference between even and odd summation of array element is:\n%d",iRet);

    free(ptr);

    return 0;
}