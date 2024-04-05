#include<stdio.h>

char ToUpperX(char cVal)
{
    return cVal-32;
}

int main()
{
   char cValue='\0';
   char cRet='\0';

   printf("Enter a charecter to change its case:\n");
   scanf("%c",&cValue);

   cRet=ToUpperX(cValue);

   printf("%c is converted into %c..",cValue,cRet);
    return 0;
}