#include<stdio.h>

int ToIndianRupee(int iVal)
{
    int iMul=iVal*70;

    return iMul;
}
int main()
{
    int iNo=0;

    printf("Enter how Many USD($) you have:\t");
    scanf("%d",&iNo);

   int iRet= ToIndianRupee(iNo);

   printf("%d USD($) is %d in indian Rupee.\n\n",iNo,iRet);

    return 0;
}