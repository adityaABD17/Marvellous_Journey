#include<stdio.h>
#include<stdbool.h>

bool DivisibleBy5And3(iNo)
{
    if((iNo%5==0)&&(iNo%3==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue=0;
    bool bRet=0;

    printf("enter number to check:\t");
    scanf("%d",&ivalue);

    bRet=DivisibleBy5And3(ivalue);

    if(bRet==true)
    {
        printf("%d is divisible by 5 and 3",&ivalue);

    }
    else
    {
        printf("%d is not divisible by 5 or 3");
    }

    return 0;
}