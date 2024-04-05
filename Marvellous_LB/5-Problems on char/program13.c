#include<stdio.h>

int FreqOcc(char *str,char cVar)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str==cVar)
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
    char cVar='\0';

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter charecter you want to check occurance:\n");
    scanf(" %c",&cVar);

    int iRet=FreqOcc(Arr,cVar);

    printf("%c occured %d times...",cVar,iRet);

    return 0;
}