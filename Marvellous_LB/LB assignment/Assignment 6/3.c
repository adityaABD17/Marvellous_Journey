#include<stdio.h>
#include<stdbool.h>

bool NumEqual(int iVal1,int iVal2)
{
    if(iVal1==iVal2)
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
    int iNo1=0, iNo2=0;

    printf("Please Enter two numbers:\n");
    scanf("%d %d",&iNo1,&iNo2);

    int iRet=NumEqual(iNo1,iNo2);

    if(iRet==true)
    {
        printf("Numbers are equal.");
    }

    else
    {
        printf("Numbers are not equal.");
    }

    return 0;
}