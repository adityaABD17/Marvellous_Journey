#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt=0;
    printf("Even Factors are:\n");

// Time complexity(O)=N/2

    for(iCnt=1;iCnt<(iNo/2);iCnt++)
    {
        if((iNo%iCnt==0)&&(iCnt%2==0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number to display Even factors:");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);
}