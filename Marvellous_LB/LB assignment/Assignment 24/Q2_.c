#include<stdio.h>
#include<ctype.h>

char ConvertCase(char cVar)
{
    if(cVar==toupper(cVar))
    {
        cVar=towlower(cVar);
    }
    else if(cVar==tolower(cVar))
    {
        cVar=toupper(cVar);
    }

    return cVar;
}

int main()
{
    char cVar='\0';

    printf("Enter a charecter to convert its case:\n");
    scanf("%c",&cVar);

    char cRet= ConvertCase(cVar);

    printf("%c is converted as %c",cVar,cRet);

    return 0;
}