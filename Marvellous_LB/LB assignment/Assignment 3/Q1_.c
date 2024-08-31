#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    int iAns=0;

    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        iAns+=2;

        printf("%d\t",iAns);
    }
}

int main()
{   
    int iNo=0;

    printf("Enter a number to rpint even numbers:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}