#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    for(iCnt=iVal;iCnt>0;iCnt--)
    {
        printf("%d\t#\t",iCnt);
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