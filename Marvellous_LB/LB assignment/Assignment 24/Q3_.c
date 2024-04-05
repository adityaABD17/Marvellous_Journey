#include<stdio.h>

void Display(char cVar)
{
    int i=0;
    if(cVar>=97&&cVar<=122)
    {
        for(i=cVar;i>='a';i--)
        {
            printf("%c\t",i);
        }
    }
    else if(cVar>=65&&cVar<=90)
    {
        for(i=cVar;i<='Z';i++)
        {
            printf("%c\t",i);
        }
    }
    else{
        return;
    }
}

int main()
{
    char cVar='\0';

    printf("Enter a charecter:\n");
    scanf("%c",&cVar);

    Display(cVar);

    return 0;
}