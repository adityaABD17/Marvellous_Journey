#include<stdio.h>

int AdditionI(int iVal)
{
    int iCnt=1, iSum=0;

    while(iCnt<=iVal)
    {
        iSum+=iCnt;
        iCnt++;
    }
    return iSum;
}

int AdditionR(int iVal)
{
    static int iCnt=1, iSum=0;

    if(iCnt<=iVal)
    {
        iSum+=iVal;
        iCnt++;
        AdditionR(iVal);
    }
    return iSum;
}

int main()
{
    int iNum=0,iRet=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    iRet=AdditionR(iNum);

    printf("Sum is : %d",iRet);

    return 0;
}