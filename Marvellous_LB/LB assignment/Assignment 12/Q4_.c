#include<stdio.h>

int nFrequency(int iVal)
{
    int iDigit=0;
    int iFreq=0;
    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit==4)
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

    printf("Enter a number to check frequency of 4:\n");
    scanf("%d",&iNo);

    int iRet= nFrequency(iNo);

    printf("Frequecy of 4 in the number:  %d",iRet);

    return 0;
}