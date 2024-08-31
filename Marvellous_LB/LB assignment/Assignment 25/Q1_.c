#include<stdio.h>

int CheckCapital(char *Arr)
{
    int iCnt=0;
    while(*Arr!='\0')
    {
    if((*Arr>='A') && (*Arr<='Z'))
    {
        iCnt++;
    }
    *Arr++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];

    printf("Enter string of charecters:\n");
    scanf("%[^'\n']s\n",Arr);

    int iRet=CheckCapital(Arr);

    printf("There are %d capital letter in the string...\n",iRet);
    return 0;
}