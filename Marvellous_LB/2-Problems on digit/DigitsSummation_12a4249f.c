#include<stdio.h>

int DigitsSummation(int iVal)
{   
    int iDigit=0;
    int iSum=0;

    while(iVal!=0)
    {
        iDigit=iVal%10;

        iSum+=iDigit;
        iVal/=10;

    }

    return iSum;
}

int main()
{
    int iNo=0;
    printf("Enter a digit to evaluate summation:\n");
    scanf("%d",&iNo);

    int iRet=DigitsSummation(iNo);

    printf("Summation of %d is:\n%d",iNo,iRet);

    return 0;
}