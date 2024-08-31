#include<stdio.h>
#include<stdbool.h>

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


// 6   28   496   8126  are perfect numbers
bool CheckPerfect(int iData)
{
    int iAns=0;
    
    iAns=SumFactors(iData);

    if(iAns==iData){
        return true;
    }

    else {
        return false;
    }

}

int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    bool bRet=CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    
    return 0;
}