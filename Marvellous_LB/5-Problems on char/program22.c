#include<stdio.h>

void Toggle(char *str)
{
    while(*str!='\0')
    {
    if((*str>='a')&&(*str<='z'))
    {
        *str=*str-32;
    }
    else if((*str>='A')&&(*str<='Z'))
    {
        *str=*str+32;
    }
    else
    {
        *str=*str;
    }
    str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string to convert lower case into upper:\n");
    scanf("%[^'\n']s",Arr);

    Toggle(Arr);

    printf("The converted string is:\n%s",Arr);

    return 0;
}