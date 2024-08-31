#include<stdio.h>

int SumDigitR(int iVal)
{
   static int iSum=0;
   int iDigit=0;

    if(iVal!=0)
    {
        iDigit=iVal%10;
        iSum=iSum+iDigit;
        iVal=iVal/10;
        SumDigitR(iVal);
    }
    return iSum;

}

int main()
{
    int iNum=0;
    int iRet=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    iRet=SumDigitR(iNum);

    printf("Number of digit in the %d are %d",iNum,iRet);

    return 0;
}