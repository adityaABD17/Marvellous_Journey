#include<stdio.h>

void strcpyX(char *src,char *dest)
{
    while(*src!='\0')
    {
        *dest=*src;

        src++;
        dest++;
    }
    *dest='\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string to convert lower case into upper:\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is :\n%s",Brr);

    return 0;
}