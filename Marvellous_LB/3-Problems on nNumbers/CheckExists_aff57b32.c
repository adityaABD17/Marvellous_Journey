#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckExists(int Arr[], int iSize, int iValue)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            break;
        }
    }

    if(iCnt==iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{   
    int *ptr=NULL;
    int iLength=0,iCnt=0,iValue=0;

    printf("Enter number of elements you want to store in array:\t");
    scanf("%d",&iLength);

    ptr=(int *) malloc (iLength*sizeof(int));

    printf("Enter Elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter Number you want to check if present:");
    scanf("%d",&iValue);

    bool bRet=CheckExists(ptr,iLength,iValue);

    if(bRet==true)
    {
        printf("%d is present in the array.",iValue);
    }
    else
    {
        printf("%d is not present in the array.",iValue);
    }


    return 0;
}