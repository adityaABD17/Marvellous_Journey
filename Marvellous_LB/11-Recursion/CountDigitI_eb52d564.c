#include<stdio.h>

int CountDigitI(int iVal)
{
   int iCnt=0;

    while(iVal!=0)
    {
        iCnt++;
        iVal=iVal/10;
    }
    return iCnt;

}
int CountDigitR(int iVal)
{
   static int iCnt=0;

    if(iVal!=0)
    {
        iCnt++;
        iVal=iVal/10;
        CountDigitR(iVal);
    }
    return iCnt;

}

int main()
{
    int iNum=0;
    int iRet=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    iRet=CountDigitR(iNum);

    printf("Number of digit in the %d are %d",iNum,iRet);

    return 0;
}