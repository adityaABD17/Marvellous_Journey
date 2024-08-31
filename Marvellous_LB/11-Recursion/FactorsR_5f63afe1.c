#include<stdio.h>

int FactorsR(int iVal)
{
   static int iCnt=1,iAdd=0;

   if(iCnt<=(iVal/2))
    {
        if((iVal%iCnt)==0)
        {
            iAdd+=iCnt;
        }
        iCnt++;
        FactorsR(iVal);
    }
    return iAdd;
}

int main()
{
    int iNum=0,iRet=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    iRet=FactorsR(iNum);

    printf("Addition of factors is : %d \n",iRet);

    return 0;
}