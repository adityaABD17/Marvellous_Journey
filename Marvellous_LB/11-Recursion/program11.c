#include<stdio.h>

int CapitalCntR(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCnt++;
        }
        str++;
        CapitalCntR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter an array :\n");
    scanf("%[^\n]s",Arr);

    iRet=CapitalCntR(Arr);

    printf("Number of capital charecters in the array is: %d",iRet);

    return 0;
}