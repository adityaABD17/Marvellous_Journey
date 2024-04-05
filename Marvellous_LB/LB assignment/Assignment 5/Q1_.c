#include<stdio.h>
int Display(int iVal)
{
    int iCnt=0;
    int iSumF=0;
    int iSumN=0;

    for(iCnt=1;iCnt<iVal;iCnt++)
    {
        if(iVal%iCnt==0)
        {
            iSumF+=iCnt;
        }

        else{
            iSumN+=iCnt;
        }

    }

    int iDiff=iSumF-iSumN;

    return iDiff;
}

int main()
{
    int iNo=0;
    printf("Enter a number to evaluate:");
    scanf("%d",&iNo);

    int iRet=Display(iNo);
    printf("Difference between the summation of factors and non-factors of %d is:%d",iNo,iRet);

    return 0;
}