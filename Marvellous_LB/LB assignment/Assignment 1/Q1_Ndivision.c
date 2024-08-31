#include<stdio.h>
#include <stdbool.h>


int Division(int iNo1, int iNo2)
{
    int iAns=0;
    
    if(iNo1&&iNo2==0)
    {
        return false;
    }
       
        iAns=iNo1/iNo2;

        return iAns;


}

int main()
{
    int iNo1=0, iNo2=0 ;

    printf("enter first number:\t");
    scanf("%d",&iNo1);

    printf("Enter Second Number:\t");
    scanf("%d",&iNo2);


   int iRet= Division(iNo1,iNo2);


   if(iRet==false)
   {
    printf("Enter numbers which are divisible");
   }

   else{
    printf("Divison of numbers is:\t%d",iRet);

   }


    return 0;
}