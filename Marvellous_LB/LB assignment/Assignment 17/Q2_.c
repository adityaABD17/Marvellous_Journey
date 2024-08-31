#include<stdio.h>
#include<stdlib.h>

int CheckSmallest(int Arr[],int iSize)
{
    int iCnt=0,iSmall=Arr[0];
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iSmall)
        {
            iSmall=Arr[iCnt];
        }
    }
    return iSmall;
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

    int iRet=CheckSmallest(ptr,iLength);

    printf("The smallest number in the array is: %d",iRet);

    free(ptr);

    return 0;
}