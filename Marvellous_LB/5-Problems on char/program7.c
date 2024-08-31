#include<stdio.h>
#include<stdbool.h>

int strlenX(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt++;
}

int main()
{

    char Arr[40];

    printf("please enter string:\n");
    scanf("%[^'\n']",Arr);

    int iRet=strlenX(Arr);

    printf("Number of charecters are %d\n",iRet);

    return 0;
}