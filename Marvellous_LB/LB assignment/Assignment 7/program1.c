#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    if(iVal<0)
    {
        iVal= -iVal;
    }

    for(iCnt=0;iCnt<=iVal;iCnt++)
    {
        printf("$\t""*\t");
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number of times you want to print pattern\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}