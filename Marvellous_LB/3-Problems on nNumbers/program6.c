#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt=0;
    int iEven=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven+=1;
         // iEven++;
         
        }
    }
    return iEven;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter:\t");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));

    printf("Enter Elements for array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet=CountEven(ptr,iLength);

    printf("There are %d even numbers in the array.",iRet);
    
    free(ptr);

    return 0;

}