#include<stdio.h>
#include<stdbool.h>

bool Display(int iVal)
{
    int iDigit=0;
    while(iVal!=0)
    {
        iDigit=iVal%10;
        if(iDigit==0)
        {
            break;
        }
        else
        {
            iVal/=10;
        }
    }

    if(iVal!=0)
    {
        return true;
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number to check zero:\n");
    scanf("%d",&iNo);

    bool bRet=Display(iNo);

    if(bRet==true)
    {
        printf("There is zero..");
    }
    else
    {
        printf("There is no zero...");
    }

    return 0;
}