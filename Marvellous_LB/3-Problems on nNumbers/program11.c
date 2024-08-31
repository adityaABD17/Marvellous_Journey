#include<stdio.h>
#include<stdlib.h>

int IndexOf(int Arr[], int iSize, int iVal)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iVal)
        {
            break;
        }
    }

    if(iCnt==iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{   
    int *ptr=NULL;
    int iLength=0, iCnt=0 , iNum=0;

    printf("Enter size of array:\t");
    scanf("%d",&iLength);

    ptr=(int *) malloc (iLength*sizeof(int));

    printf("enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number that you want index of:\t");
    scanf("%d",&iNum);

    int iRet= IndexOf(ptr,iLength,iNum);
    
    if(iRet==-1)
    {
        printf("%d is not present in the array.\n",iNum);
    }
    else
    {
    printf("Index of %d in array is:\t%d",iNum,iRet);
    }

    free(ptr);

    return 0;
}