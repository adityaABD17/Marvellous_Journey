#include<stdio.h>

int strlenR(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        iCnt++;
        str++;
        strlenR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter an array :\n");
    scanf("%[^\n]s",Arr);

    iRet=strlenR(Arr);

    printf("Number of charecters in the array is: %d",iRet);

    return 0;
}