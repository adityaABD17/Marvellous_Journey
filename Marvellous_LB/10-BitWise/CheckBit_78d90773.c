#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
    UINT iMask= 0X00000001;
    UINT Result=0;

    if(iPos<1 || iPos>32)
    {
        printf("Invalid position, it should be in between 1-32\n");
        return false;
    }

    iMask=iMask<<(iPos-1); //Dynamic Mask Formation

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
    UINT iPosition=0;
    bool bRet=false;

    printf("Enter a number :");
    scanf("%d",&iValue);

    printf("Enter the position of bit : ");
    scanf("%d",&iPosition);

    bRet=CheckBit(iValue,iPosition);
    if(bRet==true)
    {
        printf("Bit at the position %d is ON.",iPosition);
    }
    else
    {
        printf("Bit at the position %d is OFF.",iPosition);
    }

    return 0;

}