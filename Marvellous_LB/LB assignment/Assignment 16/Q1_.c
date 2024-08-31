#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[],int iSize,int iNo)
{
    int iCnt=0,iFreq=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
       {
        iFreq+=1;
        break;
       }
    }

    if(iFreq==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int *ptr=0;
    int iLength=0,iCnt=0,iNo=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number you want to check frequency of: ");
    scanf("%d",&iNo);

    bool bRet=CheckNum(ptr,iLength,iNo);
        
    if(bRet==true)
    {
        printf("%d is present..",iNo);
    }
    else
    {
        printf("%d is absent..",iNo);
    }
    
    free(ptr);
    return 0;
}