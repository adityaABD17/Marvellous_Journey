#include<stdio.h>

int CntWhiteSpaces(char *str)
{
    int iTemp=0;
    while(*str!='\0')
    {
    if(*str==' ')
    {
        iTemp++;
    }
    str++;
    }
    return iTemp;
}

int main()
{
    char Arr[20];

    printf("Enter the string to convert lower case into upper:\n");
    scanf("%[^'\n']s",Arr);

    int iRet=CntWhiteSpaces(Arr);

    printf("Number of White space are:\n%d",iRet);

    return 0;
}