#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch>='0')&&(ch<='9'))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{

    char cValue='\0';

    printf("please enter a charecter:\n");
    scanf("%c",&cValue);

    bool bRet=IsDigit(cValue);

    if(bRet==true)
    {
        printf("%c is digit..\n",cValue);
    }
    else{
        printf("%c is not a digit..\n",cValue);
    }

    return 0;
}