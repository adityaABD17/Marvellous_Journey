#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        printf("*\t");
    }

    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iNo=0;

    printf("Enter Number of times you want to print * & # :\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}