#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1= 0X00000001;
    UINT iMask2=0X00000001;

    UINT iMask=0;

    UINT Result=0;

    if(iPos1<1 || iPos1>32 || iPos2<1 || iPos2>32)
    {
        printf("Invalid position, it should be in between 1-32\n");
        return false;
    }

    iMask1=iMask1<<(iPos1-1); //Dynamic Mask Formation
    iMask2=iMask2<<(iPos2-1); //Dynamic Mask Formation

    iMask= iMask1 | iMask2;

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
    UINT iPosition1=0;
    UINT iPosition2=0;
    bool bRet=false;

    printf("Enter a number :");
    scanf("%d",&iValue);

    printf("Enter the position of bit : ");
    scanf("%d",&iPosition1);

    printf("Enter the position of bit : ");
    scanf("%d",&iPosition2);

    bRet=CheckBit(iValue,iPosition1,iPosition2);
    if(bRet==true)
    {
        printf("Bit at the position %d  and %d is ON.",iPosition1,iPosition2);
    }
    else
    {
        printf("Bit at the position %d and %d is OFF.",iPosition1,iPosition2);
    }

    return 0;

}