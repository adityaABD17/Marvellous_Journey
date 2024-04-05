#include<stdio.h>
void Display(int iNo)
{   int iCnt=0;
    while(iCnt<=iNo)
    {
        printf("*\n");

        iCnt++;
    }
}


int main()
{
    int iVal=0;
    printf("Enter a number to iterate *:");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}