#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt=0;
    printf("Even Factors are:\n");

// time complexity (O)=N/4

    for(iCnt=1;iCnt<(iNo/2);iCnt+=2)
    {
        if((iNo%iCnt==0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number to display Even factors:\t");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);
}