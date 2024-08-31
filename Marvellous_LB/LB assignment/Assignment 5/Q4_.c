#include<stdio.h>

int Display(int iVal)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        if(iVal%iCnt!=0)
        {
            iSum+=iCnt;
        }
    }
    
    return iSum;

}

int main()
{
    int iNo=0;

    printf("Enter a number to display:\t");
    scanf("%d",&iNo);

    int iRet=Display(iNo);

    printf("Summation of all Non-factors of %d is:%d",iNo,iRet);

    return 0;
}