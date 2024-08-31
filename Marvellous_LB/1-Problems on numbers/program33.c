#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt=0;

    printf("________________________________\n");
    printf("Table of %d is:\n",iNo);
    for(iCnt=1;iCnt<=10;iCnt++)
    {
       printf("%d\n",iNo*iCnt);
    }
     printf("________________________________\n");
}

int main()
{
    int iValue=0;

    printf("Enter Number to display table: ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}