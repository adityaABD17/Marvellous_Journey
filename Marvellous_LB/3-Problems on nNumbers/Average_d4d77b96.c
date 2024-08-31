#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)

float Average(int Arr[] , int iSize)
{
    int iSum=0, iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }

    return (iSum / iSize);
}

int main()
{
    int *ptr =NULL;
    int iLength=0 ,iCnt=0;

    printf("Enter how many numbers you want to enter:");
    scanf("%d",&iLength);

    ptr =(int *)malloc(iLength*sizeof(int));

    printf("please enter the numbers:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    float fRet=Average(ptr,iLength);

    printf("Average of the numbers is:\t%f",fRet);

    free(ptr);

    return 0;
}