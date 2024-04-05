#include<stdio.h>
#include<stdlib.h>

void CheckInRange(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt=0,iR=0;

    printf("Numbers in between range are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        for(iR=iStart;iR<=iEnd;iR++)
        if(Arr[iCnt]==iR)
        {
          printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr=0;
    int iLength=0,iCnt=0,iStart=0,iEnd=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter start and end of range : \n");
    scanf("%d %d",&iStart,&iEnd);

    CheckInRange(ptr,iLength,iStart,iEnd);

    free(ptr);
    return 0;
}