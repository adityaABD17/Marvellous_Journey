#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int iVal)
{
   static int iCnt=1,iAdd=0;

   if(iCnt<=(iVal/2))
    {
        if((iVal%iCnt)==0)
        {
            iAdd+=iCnt;
        }
        iCnt++;
        CheckPerfectR(iVal);
    }
    if(iAdd==iVal)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNum=0;
    bool bRet=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    bRet=CheckPerfectR(iNum);

    if(bRet==true)
    {
        printf("%d is a perfect number",iNum);
    }
    else
    {
        printf("%d is not a perfect number",iNum);
    }

    return 0;
}