#include<stdio.h>

int DigitsMul(int iVal)
{
    int iMult=1,iDigit=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        if(iDigit==0)
        {
            iDigit+=1;
        }

        iMult*=iDigit;
       
        iVal/=10;
    }

    return iMult;
}

int main()
{
    int iNo=0;

    printf("Enter a number to multiply all digits in it:\n");
    scanf("%d",&iNo);

    int iRet=DigitsMul(iNo);

    printf("Multiplication of digit is:\n%d",iRet);

    return 0;
}