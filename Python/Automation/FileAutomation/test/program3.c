#include<stdio.h>

int Summation(int Data[],int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum+=Data[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt=0;
    int iRet=0;

    printf("Enter numbers to store in array:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements in the array are:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
    
        printf("%d\n",Arr[iCnt]);
    }

    iRet=Summation(Arr,5);    //Summation(BaseAddress,Size)

    printf("Summation of numbers is:\n%d",iRet);
    return 0;
}