#include<stdio.h>

int CountEven(int iVal)
{
    int iEvenN=0,iDigit=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit%2==0)
        {
            iEvenN++;
        }
        iVal/=10;
    }

    return iEvenN;
}

int main()
{
    int iNo=0;

    printf("Enter a number to count even digits in it:\n");
    scanf("%d",&iNo);

    int iRet=CountEven(iNo);

    printf("There area %d even numbers in digit.\n",iRet);

    return 0;
}