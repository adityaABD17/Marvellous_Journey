#include<stdio.h>
#include<stdbool.h>

int main()
{

    char cValue[40];

    printf("please enter your full name:\n");
    // scanf("%s",cValue);
    scanf("%[^'\n']",cValue);

    printf("your full name is:\n");
    printf("%s",cValue);

    return 0;
}