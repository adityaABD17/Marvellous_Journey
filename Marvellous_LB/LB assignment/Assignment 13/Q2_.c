#include<stdio.h>

int CountOdd(int iVal)
{
    int iOddN=0,iDigit=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit%2!=0)
        {
            iOddN++;
        }
        iVal/=10;
    }

    return iOddN;
}

int main()
{
    int iNo=0;

    printf("Enter a number to count Odd digits in it:\n");
    scanf("%d",&iNo);

    int iRet=CountOdd(iNo);

    printf("There area %d Odd numbers in digit.\n",iRet);

    return 0;
}