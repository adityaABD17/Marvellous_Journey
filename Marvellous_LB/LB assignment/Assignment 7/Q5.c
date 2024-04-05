#include<stdio.h>

void Display(int iVal,int iMul)
{
    int iCnt=0,iTemp=0;

    for(iCnt=1;iCnt<=iMul;iCnt++)
    {
        iTemp=iVal*iCnt;

        printf("%d\t",iTemp);
    }
}

int main()
{
    int iNo=0,iMul=0;

    printf("Enter a number you want to print multiples:\t");
    scanf("%d",&iNo);

    printf("How many multiples you want to print:\t");
    scanf("%d",&iMul);

    Display(iNo,iMul);

    return 0;
}