#include<stdio.h>

int Summation(int iVal)
{   
    int iNo=0;
     int iSum=0;
    for (iNo=1;iNo<=iVal;iNo++)
    {
        iSum+=iNo;
    }
    return iSum;
}

int main()
{
    int iVal=0;
    int iRet=0;
   printf("Enter the value:");
   scanf("%d",&iVal);
    iRet= Summation(iVal);
    printf("Summation is:%d",iRet);
    return 0;
}