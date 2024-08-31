#include<stdio.h>

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

char main()
{
    char Arr[20];

    printf("Enter charecters in the array:\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after conversion is:%s\n",Arr);
    
    return 0;
}