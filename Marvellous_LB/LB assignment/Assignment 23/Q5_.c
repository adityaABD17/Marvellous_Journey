#include<stdio.h>
#include<ctype.h>

void Display(char cVar)
{
    if(cVar==tolower(cVar))
    {
        cVar=toupper(cVar);
    }
    
    switch (cVar)
    {
        case 'a':
        printf("Your exam is at 7 A.M.");
        break;

        case 'B':
        printf("Your exam is at 8:30 A.M.");
        break;

        case 'C':
        printf("Your exam is at 9:20 A.M.");
        break;

        case 'D':
        printf("Your exam is at 10:30 A.M.");
        break;

        default:
        printf("Enter a valid division...");
        break;
    }
}

int main()
{
    char cVar='\0';

    printf("Enter your class division:\n");
    scanf("%c",&cVar);

    Display(cVar);
    return 0;
}