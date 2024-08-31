#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iNo=0;

    printf("Enter a number you want to print numbers till that number:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}