#include<stdio.h>

int DiffFactorial(int iVal)
{
    int iCnt=0;
    int iE_Fact=1,iDiff=0;
    int iO_Fact=1;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        if(iCnt%2==0)
        {
            iE_Fact*=iCnt;
        }
        if(iCnt%2!=0)
        {
            iO_Fact*=iCnt;
        }
    }

    iDiff=(iE_Fact)-(iO_Fact);

    if(iDiff<0)
    {
        iDiff=-iDiff;
    }

    return iDiff;
}

int main()
{
    int iNo=0;

    printf("Enter a digit that you want Difference between odd and even numbered factorial:\t");
    scanf("%d",&iNo);

    int iRet=DiffFactorial(iNo);

    printf("~Difference between Factorial of %d with odd and even number is %d\n\n",iNo,iRet);

    return 0;
}