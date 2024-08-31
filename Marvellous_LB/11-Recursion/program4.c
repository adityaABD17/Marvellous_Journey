#include<stdio.h>

int FactorialR(int iVal)
{
    static int iCnt=1, iSum=1;

    if(iCnt<=iVal)
    {
        iSum*=iCnt;
        iCnt++;
        FactorialR(iVal);
    }
    return iSum;
}

int main()
{
    int iNum=0,iRet=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    iRet=FactorialR(iNum);

    printf("Sum is : %d",iRet);

    return 0;
}