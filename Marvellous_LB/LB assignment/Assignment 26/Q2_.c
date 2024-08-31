#include<stdio.h>

void StrUprX(char *Str)
{
    while(*Str!='\0')
    {
        if((*Str>='a')&&(*Str<='z'))
        {
            *Str=*Str-32;
        }
        Str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter any string :\n");
    scanf("%[^'\n']s",Arr);

    StrUprX(Arr);

    printf("Changed string is : %s\n",Arr);

    return 0;
}