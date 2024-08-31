#include<stdio.h>

int SmallLetters(char *Arr)
{
   int iCnt=0;
   while(*Arr!='\0')
   {
    if((*Arr>='a')&&(*Arr<='z'))
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

    printf("Enter String in the array:\n");
    scanf("%[^'\n']s",Arr);

    int iRet= SmallLetters(Arr);

    printf("There are %d smmall letters in the string...\n",iRet);

    return 0;
}