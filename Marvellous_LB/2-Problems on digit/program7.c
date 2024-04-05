#include<stdio.h>
#include<stdbool.h>

bool PalindromeDigit(int iData)
{
    int iReverse=0;
    iReverse=ReverseDigit(iData);
    return (iReverse==iData);
}

int ReverseDigit(int iVal)
{
    bool bTemp=iVal;
    int iDigit=0;
    int iRev=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        iRev=(iRev*10)+iDigit;

        iVal=iVal/10;
    }


    return iRev;
}

int main()
{
     int iNo=0;

    printf("Enter number to check:");
    scanf("%d",&iNo);

    bool bRet=PalindromeDigit(iNo);

    if(bRet==true)
    {
        printf("Number is palindrome...");
    }
    else{
        printf("Number is not palindrome...");
    }
    
    return 0;
}