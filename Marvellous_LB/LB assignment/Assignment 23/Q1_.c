#include<stdio.h>
#include<stdbool.h>

bool CheckAlphabet(char cVal)
{
    if((cVal>='a')&&(cVal<='z')||(cVal>='A')&&(cVal<='Z'))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    char cVal='\0';

    printf("Enter a charecter to check it is alphabet or not:\n");
    scanf("%c",&cVal);

    bool bRet=CheckAlphabet(cVal);
    if(bRet==true)
    {
        printf("%c is an alphabet..",cVal);
    }
    else{
        printf("%c is not an alphabet",cVal);
    }

    return 0;
}