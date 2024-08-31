#include<stdio.h>

int EvenFactorial(int iVal)
{
    int iCnt=0;
    int iFact=1;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        if(iCnt%2==0)
        {
            iFact*=iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iNo=0;

    printf("Enter a digit that you want factorial with Even numbers only:\t");
    scanf("%d",&iNo);

    int iRet=EvenFactorial(iNo);

    printf("~Factorial of %d with even number is %d\n\n",iNo,iRet);

    return 0;
}