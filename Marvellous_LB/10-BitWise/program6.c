#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask= 8;
    UINT Result=0;

    Result=iNo & iMask;

    if(Result==iMask)
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
    UINT iValue=0;
    bool bRet=false;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet=CheckBit(iValue);

    if(bRet==true)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }

    return 0;
}