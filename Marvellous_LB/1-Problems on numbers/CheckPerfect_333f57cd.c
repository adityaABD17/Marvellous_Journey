#include<stdio.h>
#include<stdbool.h>

// 6   28   496   8126  are perfect numbers

// time complexity O(N/2)
int CheckPerfect(int iNo)
{
    int iCnt=0, iSum=0;
    printf("Factors are:\n");
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum+=iCnt;
            printf("%d\n",iCnt);
        }
    }
    
    if(iSum==iNo)
    {
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