#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("JAY GANESH...\n");
    }
}

int main()
{
    int iCnt=0;
    printf("Enter Number you want to print JAY GANESH...\t");
    scanf("%d",&iCnt);

    Display(iCnt);
    return 0;
}