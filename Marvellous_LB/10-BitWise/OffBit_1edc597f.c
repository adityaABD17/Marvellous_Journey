#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 0000 1111 0000 1111 0000 1111 0000 1111
// 0    F    0    F    0    F    0    F

//Hexadecimal Value 0X0F0F0F0F
UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X0F0F0F0F;
    UINT iAns = 0;

    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
