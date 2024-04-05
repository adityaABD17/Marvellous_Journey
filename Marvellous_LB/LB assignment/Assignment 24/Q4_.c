#include<stdio.h>
#include<stdbool.h>

bool CheckSymbol(char cVar)
{
    bool bFlag=false;
    if((cVar>=33)&&(cVar<=42))
    {
        bFlag=true;
    }

    return bFlag;
}

int main()
{
    char cVar='\0';

    printf("Enter symbol to check:\n");
    scanf("%c",&cVar);

    bool bRet=CheckSymbol(cVar);

    if(bRet==true)
    {
        printf("%c is a special charecter...",cVar);
    }
    else{
        printf("%c is not a special charecter...",cVar);
    }
    return 0;
}