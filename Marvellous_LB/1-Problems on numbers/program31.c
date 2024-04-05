#include<stdio.h>

void NonFactors(int iNo)
{
   int iCnt=0;
   int iSum=0;

   printf("Non-Factors of %d are:\n",iNo);

   for(iCnt=1;iCnt<iNo;iCnt++)
   {
    if((iNo%iCnt)!=0){
        printf("%d\n",iCnt);
    }
   }

}

int main()
{
    int iValue=0;
    printf("Enter Number to display non factors:\t");
    scanf("%d",&iValue);

    NonFactors(iValue);

    return 0;
}