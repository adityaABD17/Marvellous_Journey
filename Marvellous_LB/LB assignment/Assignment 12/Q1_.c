#include<stdio.h>

void Display(int iVal)
{
    int iDigit=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

        printf("%d\t",iDigit);

        iVal/=10;
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number to print ista digits in reverse order:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}