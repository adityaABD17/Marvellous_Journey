#include<stdio.h>

int Mult(int iVal1,int iVal2,int iVal3)
{   
    int iAns=0;

 if(iVal1||iVal2||iVal3==0)
{
   if(iVal1==0)
   {
    iVal1=1;
   }
   if(iVal2==0)
   {
    iVal2=1;
   }
   if(iVal3==0)
   {
    iVal3=1;
   }
}
    iAns=iVal1*iVal2*iVal3;

    return iAns;
}


int main()
{
    int iNo1=0,iNo2=0,iNo3=0;

    printf("Enter Three numbers:\n");
    scanf("%d %d %d",&iNo1,&iNo2,&iNo3);

    if(iNo1==0 && iNo2==0 && iNo3==0)
    {
        printf("Multiplication of numbers is:%d",0);
        return 0;
    }

    else
    {
        int iRet=Mult(iNo1,iNo2,iNo3);
        printf("Multiplication of numbers is:%d",iRet);
    }

    return 0;
}