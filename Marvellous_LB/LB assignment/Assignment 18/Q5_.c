#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    for(iCnt=2;iCnt<=iVal*2;iCnt+=2)
    {
        printf("%d\t",iCnt);
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