#include<stdio.h>
#include<ctype.h>

void Display(char cVar)
{
    if(cVar==tolower(cVar))
    {
        printf("The upper case is represented as:\t%c",toupper(cVar));
    }

    else if(cVar==toupper(cVar))
    {
        printf("The lower case is represented as :\t%c",tolower(cVar));
    }
}

int main()
{
    char cVar='0';

    printf("Enter a single charecter to convert:\t");
    scanf("%c",&cVar);

    Display(cVar);
    return 0;
}