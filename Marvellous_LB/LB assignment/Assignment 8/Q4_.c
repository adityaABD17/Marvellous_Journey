#include<stdio.h>

void Table(int iVal)
{
    int iCnt=0;
    int iMul=1;

    if(iVal<0)
    {
        iVal=-iVal;
    }
    printf("*****************************************************************************\n");
    printf("Table of %d\n",iVal);
    
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iMul=iVal*iCnt;
        printf("%d\t",iMul);
    }
     printf("\n");
     printf("*****************************************************************************\n");

}

int main()
{
    int iNo=0;

    printf("Enter a number to display its table:\t");
    scanf("%d",&iNo);

    Table(iNo);

    return 0;
}