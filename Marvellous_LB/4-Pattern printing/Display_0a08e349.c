#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number you want to print numbers till that number:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}