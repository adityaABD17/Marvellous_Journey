#include<stdio.h>

void Display(int iVal1, int iVal2)
{
    int iCnt=0;
    
    iCnt=iVal1;
    while(iCnt<=iVal2)
    {
        printf("%d\t",iCnt);
        iCnt++;
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