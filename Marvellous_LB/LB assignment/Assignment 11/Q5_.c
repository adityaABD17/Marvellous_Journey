#include<stdio.h>

int Display(int iVal1, int iVal2)
{
    int iCnt=0;

    if(iVal1>iVal2)
    {
       printf("Invalid range...");
    }

    else
    {
    iCnt=iVal2;
    while(iCnt>=iVal1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    }
}

int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter first and last number of the range:\n");
    scanf("%d %d",&iNo1,&iNo2);

    Display(iNo1,iNo2);

    return 0;
}