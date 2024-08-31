#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckValue(int Arr[],int iSize)
{
    int iCnt=0,iCheck=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           iCheck+=1;
           break;
        } 
    }
    
    if(iCheck==1)
    {
        return true;
    }
    else
    return false;
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

    int iRet=CheckValue(ptr,iLength);

    if(iRet==true)
    {
        printf("11 is present..");
    }
    else
    {
        printf("11 is absent..");
    }

    free(ptr);
    return 0;
}