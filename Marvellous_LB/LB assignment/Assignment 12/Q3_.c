#include<stdio.h>

int nFrequency(int iVal)
{
    int iDigit=0;
    int iFreq=0;
    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit==2)
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

    printf("Enter a number to check frequency of 2:\n");
    scanf("%d",&iNo);

    int iRet= nFrequency(iNo);

    printf("Frequecy of 2 in the number:  %d",iRet);

    return 0;
}