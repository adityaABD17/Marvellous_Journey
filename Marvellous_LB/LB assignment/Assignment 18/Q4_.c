#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }

}

int main()
{
    int iNo=0;

    printf("Enter number that you want to print pattern:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}