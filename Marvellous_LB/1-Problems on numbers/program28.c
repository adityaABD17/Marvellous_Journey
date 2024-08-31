#include<stdio.h>

// time complexity O(N/2)
int SumFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;
    printf("Factors are:\n");
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum+=iCnt;
            printf("%d\n",iCnt);
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    int iRet=SumFactors(iValue);

    printf("Addition of factors is:%d",iRet);
    return 0;
}