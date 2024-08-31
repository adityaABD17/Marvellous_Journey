#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    
    if(iVal<0)
    {
        iVal=-iVal;
    }
    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("*\t");
    }

    printf("\n");
}

int main()
{
    int iNo=0;

    printf("Enter number you want to print * :\t");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}