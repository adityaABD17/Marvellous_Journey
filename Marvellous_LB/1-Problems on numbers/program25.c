#include<stdio.h>

int Factorial(int iNo)
{
     int iVal=0;
     int iFact=1;
    for (iVal=1;iVal<=iNo;iVal++)
    {
        iFact*=iVal;
    }
    return iFact;
}

int main()
{
    int iVal=0;
    printf("Enter a number for factorial:");
    scanf("%d",&iVal);
    int iRet=0;
    iRet= Factorial(iVal);
   printf("Factorial of %d is:%d",iVal,iRet);
    return 0;
}