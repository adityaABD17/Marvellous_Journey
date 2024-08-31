#include<stdio.h>
#include<stdbool.h>
bool PalindromeDigit(int iVal)
{
    int iTemp=iVal;
    int iDigit=0;
    int iRev=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    // for( ;iVal!=0; )

    for( iRev=0 ;iVal!=0; iVal=iVal/10)
    {
             iDigit=iVal%10;
             iRev=(iRev*10)+iDigit;
    }

    // while(iVal!=0)
    // {
    //     iDigit=iVal%10;
    //     iRev=(iRev*10)+iDigit;
    //     iVal=iVal/10;
    // }

    if(iRev==iTemp)
    {
        return true;
    }
    else{
        return false;
    }
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