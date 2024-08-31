#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    int iRet=CountCapital(Arr);

    printf("capital cases occured %d times...",iRet);

    return 0;
}