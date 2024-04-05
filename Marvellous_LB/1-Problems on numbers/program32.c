#include<stdio.h>

int SumNonFactors(int iNo)
{
   int iCnt=0;
   int iSum=0;

   for(iCnt=1;iCnt<iNo;iCnt++)
   {
    if((iNo%iCnt)!=0){
        iSum+=iCnt;
    }
   }
    return iSum;


}

int main()
{
    int iValue=0;
    printf("Enter Number to display non factors:\t");
    scanf("%d",&iValue);

    int iRet=SumNonFactors(iValue);

    printf("Addition of Non-Factors of %d is:\t%d",iValue,iRet);

   

    return 0;
}