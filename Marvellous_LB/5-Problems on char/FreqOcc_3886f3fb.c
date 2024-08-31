#include<stdio.h>
#include<stdbool.h>

int FreqOcc(char *str,char cVar)
{
    int iCnt=0;
    bool bFlag=false;

    while(*str!='\0')
    {
        if(*str==cVar)
        {
            bFlag=true;
            break;
        }
        else
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cVar='\0';

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter charecter you want to check occurance:\n");
    scanf(" %c",&cVar);

    bool bRet=FreqOcc(Arr,cVar);

    if(bRet==true)
    {
        printf("%c is present in the string...",cVar);
    }
    else{
        printf("%c is not present in the string...",cVar);
    }
    return 0;
}