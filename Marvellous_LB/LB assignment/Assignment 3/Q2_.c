#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    printf("Even Factors are:\n");
    for(iCnt=2;iCnt<=(iVal/2);iCnt+=2)
    {
        if(iVal%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}


int main()
{
    int iNo=0;

    printf("Enter a number to print it's even factors:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
