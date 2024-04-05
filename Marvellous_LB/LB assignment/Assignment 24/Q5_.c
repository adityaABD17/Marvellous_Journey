#include<stdio.h>

void Display(char cVar)
{
    printf("The values in the ACII table are:\n");
    printf("Decimal\tOctal\tHexadecimal\n");
    printf("%d\t%o\t%x\n",cVar,cVar,cVar);
}

int main()
{
    char cVar='\0';

    printf("Enter a charecter:\n");
    scanf("%c",&cVar);

    Display(cVar);

    return 0;
}