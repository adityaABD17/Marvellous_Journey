#include<stdio.h>

int Display(char *str)
{
    if(*str!='\0')
    {
        printf("%s\n",str);
        str++;
        Display(str);
    }
}

int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter an array :\n");
    scanf("%[^\n]s",Arr);

    Display(Arr);

    return 0;
}