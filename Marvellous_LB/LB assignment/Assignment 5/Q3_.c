#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    printf("Non-factors are:\n");

    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        if(iVal%iCnt!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number to display its non-factors:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}