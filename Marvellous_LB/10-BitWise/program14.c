#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT iNo,UINT iStart, UINT iEnd)
{
    UINT Mask1=0XFFFFFFFF,Mask2=0XFFFFFFFF,Mask=0,Result=0;

    Mask1=Mask1<<(iStart-1);
    Mask2=Mask2>>(32-iEnd);
    Mask=Mask1 & Mask2;

    Result=iNo ^ Mask;
    return Result;
}

int main()
{
    UINT iValue=0;
    UINT i=0,j=0;
    UINT iRet=0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter starting bit : ");
    scanf("%d",&i);

    printf("Enter starting bit : ");
    scanf("%d",&j);

    iRet=ToggleRange(iValue,i,j);

    printf("Updated number is :%d\n",iRet);

    return 0;
}