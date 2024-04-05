#include<stdio.h>

int SummationDiff(int iVal)
{
    int iOdd=0,iEven=0,iDiff=0,iDigit=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit%2!=0)
        {
            iOdd+=iDigit;
        }
        else if(iDigit%2==0)
        {
            iEven+=iDigit;
        }
        iVal/=10;
    }

    iDiff=iOdd-iEven;

    if(iDiff<0)
    {
        iDiff=-iDiff;
    }

    return iDiff;
}

int main()
{
    int iNo=0;

    printf("Enter a number to get difference between odd and even summation:\n");
    scanf("%d",&iNo);

    int iRet=SummationDiff(iNo);

    printf("Difference between summations is:\n%d",iRet);

    return 0;
}