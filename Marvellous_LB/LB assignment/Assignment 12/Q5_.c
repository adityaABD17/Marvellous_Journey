#include<stdio.h>

int nFrequency(int iVal)
{
    int iDigit=0;
    int iFreq=0;
    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit<6)
        {
            iFreq++;
        }
        iVal/=10;
    }

    return iFreq;
}

int main()
{
    int iNo=0;

    printf("Enter a number to check frequency that is less than 6:\n");
    scanf("%d",&iNo);

    int iRet= nFrequency(iNo);

    printf("Total numbers Less than 6 are:  %d",iRet);

    return 0;
}