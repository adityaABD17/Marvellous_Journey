#include<stdio.h>

int Maximum(int iVal)
{
    int iDigit=0;
    int iStored=0;

    if(iVal<0)
    {
        iVal=-iVal;
    }

    while(iVal!=0)
    {
        iDigit=iVal%10;

// Time complexity
        if(iDigit==9)
        {
            iStored=iDigit;
        }
////????????????????????????????   
      else if(iStored<iDigit)
      {
        iStored=iDigit;
      }
         iVal=iVal/10;
    }

    return iStored;
}

int main()
{
    int iNo=0;
    printf("Enter a number to check its largest:\n");
    scanf("%d",&iNo);

    int iRet=Maximum(iNo);

    printf("The largest in %d is:\n%d",iNo,iRet);

    return 0;
}