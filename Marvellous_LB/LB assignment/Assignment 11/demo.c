#include<stdio.h>

int Display(int iVal1, int iVal2)
{
    int iCnt=0;
    int iAdd=0;

  switch ((iVal1&&iVal2))
  {
  case 1:
   if((iVal1<0)||(iVal2<0))
   {
    iAdd=-1;
   }
    break;

  case 2:
   if(iVal1>iVal2)
   {
     iAdd=-1;
   }
   break;
  
  case 3:
    iCnt=iVal1;
    while(iCnt<=iVal2)
    {
        if(iCnt%2==0)
        {
        iAdd+=iCnt;
        iCnt+=2; //N2
        }
        else iCnt++;
    }
    break;
  }

  return iAdd;
}

int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter first and last number of the range:\n");
    scanf("%d %d",&iNo1,&iNo2);

    int iRet= Display(iNo1,iNo2);

    if(iRet<0)
    {
        printf("Invalid Range...\n");
    }

    else
    {
        printf("Addition of Even numbers in the range is:\n%d",iRet);
    }

    return 0;
}