#include<stdio.h>

int Factorial()
{
     int iVal=0;
     int iFact=1;
    for (iVal=1;iVal<=5;iVal++)
    {
        iFact*=iVal;
    }
    return iFact;
}

int main()
{
    int iRet=0;
    iRet= Factorial();
   printf("Factorial is:%d",iRet);
    return 0;
}