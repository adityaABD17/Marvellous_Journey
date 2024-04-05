#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum+=Data[iCnt];
    }

    return iSum;
}

int main()
{   
    int *ptr=0;
    int iCnt=0;
    int iLength=0;

    printf("Enter size of array:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));

    printf("Enter Elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements in the array are:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    int iRet=Summation(ptr,iLength);

    printf("Summation of Elements is:\n%d",iRet);

    return 0;
}