#include<stdio.h>

int CountDigits(int iVal)
{
    int iCnt=0;
    int iDigit=0;

    if(iVal==0)
    {
        return 1;
    }

    
    while(iVal!=0)
    {
        iDigit=iVal%10;
        iVal/=10;

        iCnt+=1;
    }
    return iCnt;
}


int main()
{
    int iNo=0;
    printf("Enter a number to count the number of digits:\t");
    scanf("%d",&iNo);
    
    int iRet=CountDigits(iNo);
    
    printf("Number of digits in %d are:\n%d",iNo,iRet);

    return 0;
}