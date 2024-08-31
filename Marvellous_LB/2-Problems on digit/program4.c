#include<stdio.h>

void Display(int iVal)
{
    int iEven=0;
    int iOdd=0;

    int iDigit=0;

    if(iVal==0)
    {
        iEven++;
    }

    while(iVal!=0)
    {
         iDigit=iVal%10;
            if(iDigit%2==0)
            {
               iEven++;
            }

             else
            {
                iOdd++;
            }

        iVal=iVal/10;
    }
        
        printf("Even Numbers count is:\n%d\n",iEven);
        printf("Odd Number count is:\n%d\n",iOdd);
}

int main()
{
    int iNo=0;

    printf("Enter a digit to count odd and even:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}