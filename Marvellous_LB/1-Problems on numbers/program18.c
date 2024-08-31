#include<stdio.h>

void Display(int iValue)
{
    int iCnt=0;
    while(iCnt<=iValue)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

int main()
{
    int iNo=0;

    printf("Enter Number of iterations:\t");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}