#include<stdio.h>
#include <stdbool.h>

bool CheckVowels(char *Arr)
{
    // bool bFlag=0;
    while(*Arr!='\0')
    {
        if((*Arr>='A')&&(*Arr<='Z'))
        {
            *Arr=*Arr+32;
        }
        if((*Arr=='a')||(*Arr=='e')||(*Arr=='i')||(*Arr=='o')||(*Arr=='u'))
        {
           return true;
        }
        Arr++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter a string to check vowels:\n");
    scanf("%['\n']s",Arr);

    bool bRet=CheckVowels(Arr);

    if(bRet==true)
    {
        printf("There are vowels in the string...\n");
    }
    else
    {
        printf("There are no vowels in the string...\n");
    }

    return 0;
}