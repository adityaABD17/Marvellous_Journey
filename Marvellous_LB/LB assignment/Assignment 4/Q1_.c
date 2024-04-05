#include<stdio.h>

int FactorsMultiplication(int iVal)
{
    int iCnt=0;
    int iMult=1;

    for(iCnt=1;iCnt<=(iVal/2);iCnt++)
    {
        if(iVal%iCnt==0)
        {
            iMult*=iCnt;
        }
    }
     return iMult;
}


int main()
{
    int iNo=0;

    printf("Enter number to evaluate:\t");
    scanf("%d",&iNo);

    int iRet=FactorsMultiplication(iNo);

    printf("Multiplication of factors of %d is:%d",iNo,iRet);

    return 0;
}