#include<stdio.h>

int Factorial(int iVal)
{
    int iCnt=0;
    int iFact=1;

    if(iVal<0)
    {
        iVal=-iVal;
    }
    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        iFact*=iCnt;
    }

    return iFact;
}

int main()
{
    int iNo=0;

    printf("Enter a number to display its factorial:\t");
    scanf("%d",&iNo);

    int iRet=Factorial(iNo);

    printf("Factorial of %d is :\n%d",iNo,iRet);

    return 0;
}