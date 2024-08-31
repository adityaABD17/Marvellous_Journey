#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;
    char ch='A';

    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }

}

int main()
{
    int iNo=0;

    printf("Enter number that you want to print alphabates:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}