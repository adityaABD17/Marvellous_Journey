#include<stdio.h>

void Display(int iVal1, int iVal2)
{
    int iCnt=0;

    if(iVal1>iVal2)
    {
        printf("Invalid Range...\n");
        
    }

    else
    printf("Even numbers in the range are:\n");
    iCnt=iVal1;
    while(iCnt<=iVal2)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
            iCnt+=2;//  N/2
        }
        else
        {
            iCnt++;
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