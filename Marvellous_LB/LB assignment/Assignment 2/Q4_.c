#include<stdio.h>

void Display(int iNo1, int iNo2)
{   
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        printf("%d\t",iNo1);
    }
}

int main()
{
    int iVal1=0, iVal2=0;

    printf("Enter Number You want to print:\t");
    scanf("%d",&iVal1);

    printf("Enter Times of number you want to print:\t");
    scanf("%d",&iVal2);

    Display(iVal1,iVal2);
    return 0;
}