#include<stdio.h>

int OddFactorial(int iVal)
{
    int iCnt=0;
    int iFact=1;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        if(iCnt%2!=0)
        {
            iFact*=iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iNo=0;

    printf("Enter a digit that you want factorial with odd numbers only:\t");
    scanf("%d",&iNo);

    int iRet=OddFactorial(iNo);

    printf("~Factorial of %d with odd number is %d\n\n",iNo,iRet);

    return 0;
}