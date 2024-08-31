#include<stdio.h>

int Summation()
{
     int iVal=0;
     int iSum=0;
    for (iVal=1;iVal<=5;iVal++)
    {
        iSum+=iVal;
    }
    return iSum;
}

int main()
{
    int iRet=0;
    iRet= Summation();
   printf("Summation is:%d",iRet);
    return 0;
}