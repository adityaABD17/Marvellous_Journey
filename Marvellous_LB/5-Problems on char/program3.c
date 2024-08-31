#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bool bRet=CheckSmall(cValue);

    if(bRet==true)
    {
        printf("%c is Capital case letter..\n",cValue);
    }
    else{
        printf("%c is not Capital case letter..\n",cValue);
    }

    return 0;
}