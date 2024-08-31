#include<stdio.h>
#include<stdlib.h>

int nOddMul(int Arr[],int iSize)
{
    int iCnt=0,iMul=1;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            iMul*=Arr[iCnt];
        }
    }

    if(iMul==1)
    {
        iMul-=1;
    }

    return iMul;
}

int main()
{
    int *ptr=0;
    int iLength=0,iCnt=0;

    printf("Enter number of elements you want to enter:\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);

    printf("Enter Elements of array:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    int iRet=nOddMul(ptr,iLength);

    printf("Multiplication of odd numbers in the array is: %d",iRet);

    return 0;
}