#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT iNo)
{
    int iCnt=0;
    int Digit=0;

    while(iNo!=0)
    {
        Digit=iNo%2;
        if(Digit==1)
        {
            iCnt++;
        }
        iNo/=2;
    }
    return iCnt;
}

int main()
{
    UINT iValue=0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    int Ret=CountOnBits(iValue);

    printf("Number of bits which are ON are:%d\n",Ret);

    return 0;
}