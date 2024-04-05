#include<stdio.h>

int FreqOcc(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
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

    int iRet=FreqOcc(Arr);

    printf("small cases occured %d times...",iRet);

    return 0;
}