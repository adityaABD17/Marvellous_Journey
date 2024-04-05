#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iPos=-1;
    for(iCnt=0;iCnt<iSize;iCnt++) // traversing forward
    {
        if(Arr[iCnt]==iNo)
        {
            iPos=iCnt;
        }
    }
   return iPos;
}

int main()
{
    int *ptr=NULL;
    int iLength=0, iCnt=0,iNo;

    printf("Enter number of elements you want to enter:\t");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int) * iLength);

    printf("Enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number you want to serach last occuring index of:\t");
    scanf("%d",&iNo);

    int iRet=LastOccurance(ptr,iLength,iNo);

    if(iRet==-1)
    {
        printf("%d is not present in the array.",iNo);
    }
    else
    {
        printf("%d is at the index position of:\t%d",iNo,iRet);
    }

    free(ptr);

    return 0;
}