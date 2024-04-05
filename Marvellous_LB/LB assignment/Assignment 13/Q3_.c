#include<stdio.h>

int InBetween(int iVal)
{
    int iDigit=0,iCount=0;
    int iCnt=0;
    int iRange[5]={3,4,5,6,7};

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

    for(iCnt=0;iCnt<5;iCnt++)
    {
     if(iDigit==iRange[iCnt])
     {
        iCount ++;
     }
    }
        iVal/=10;
    }

    return iCount;

}

int main()
{
    int iNo=0;

    printf("Enter a number to count digits between 3 to 7:\n");
    scanf("%d",&iNo);

    int iRet=InBetween(iNo);

    printf("There are %d digits in number which lies between 3 to 7.",iRet);

    return 0;
}