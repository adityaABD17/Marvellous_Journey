#include<stdio.h>

int EvenNum(int iVal)
{
    int iDigit=0;
    
    printf("Even numbers in %d are:\n",iVal);

    // conversion for negative number
    if(iVal<0)
    {
        iVal = -iVal;
    }
    
    while(iVal!=0)
    {
        iDigit=iVal%10;
        if(iDigit%2==0)
        {
            printf("%d\t",iDigit);
        }
        iVal/=10;
    }
}

int main()
{
    int iNo=0;
    printf("Enter Digit to show even number:\n");
    scanf("%d",&iNo);

    EvenNum(iNo);

    return 0;
}