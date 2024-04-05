#include<stdio.h>

void FactorsI(int iVal)
{
    int iCnt=1;

    for(iCnt=1;iCnt<=(iVal/2);iCnt++)
    {
        if(iVal%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
void FactorsR(int iVal)
{
   static int iCnt=1;

   if(iCnt<=(iVal/2))
    {
        if((iVal%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        FactorsR(iVal);
    }
}

int main()
{
    int iNum=0;

    printf("Enter number to print sum till that number: ");
    scanf("%d",&iNum);

    FactorsR(iNum);

    return 0;
}