#include<stdio.h>
#include<stdlib.h>

int CheckLargest(int Arr[],int iSize)
{
    int iCnt=0,iLarge=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iLarge)
        {
            iLarge=Arr[iCnt];
        }
    }
    return iLarge;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);

    if(ptr==NULL)
    {
        printf("Can not alloacte memory...");
    }

    printf("Enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)\
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet=CheckLargest(ptr,iLength);

    printf("The largest number in the array is: %d",iRet);

    free(ptr);

    return 0;
}