#include<stdio.h>

int ReverseDigit(int iVal)
{
    int iDigit=0;
    int iRev=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        iRev=(iRev*10)+iDigit;

        iVal=iVal/10;
    }

    return iRev;
}

int main()
{
    int iNo=0;
    printf("Enter a Number to reverse it:\n");
    scanf("%d",&iNo);

   int iRet= ReverseDigit(iNo);

   printf("Reverse Number of %d is:\n%d",iNo,iRet);

    return 0;
}