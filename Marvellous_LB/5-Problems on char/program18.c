#include<stdio.h>

char ToLowerX(char cVal)
{
    if((cVal>='A')&&(cVal<='Z'))
    {
        return cVal+32;
    }
    
    return cVal;
}

int main()
{
   char cValue='\0';
   char cRet='\0';

   printf("Enter a charecter to change its case:\n");
   scanf("%c",&cValue);

   cRet=ToLowerX(cValue);

   printf("%c is converted into %c..",cValue,cRet);
    return 0;
}