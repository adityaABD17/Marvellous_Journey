#include<stdio.h>

void strcpyXSmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if((*src>='A')&&(*src<='Z'))
        {
            *dest=*src+32;
        }
        else
        {
            *dest=*src;
        }
        
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

    strcpyXSmall(Arr,Brr);

    printf("Copied string is :\n%s\n",Brr);
    printf("Original string is:\n%s\n",Arr);

    return 0;
}