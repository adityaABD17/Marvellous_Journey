#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    char ch ='a';

    if(iVal<0)
    {
        iVal=-iVal;
    }

    for(iCnt=1;iCnt<=iVal;iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iNo=0;

    printf("Enter Number you want to print pattern:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}