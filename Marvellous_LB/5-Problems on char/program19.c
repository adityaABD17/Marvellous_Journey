#include<stdio.h>

char Toggle(char cVal)
{
    if((cVal>='A')&&(cVal<='Z'))
    {
        return cVal+32;
    }

    else if((cVal>='a')&&(cVal<='z'))
    {
        return cVal-32;
    }
    
    else
    {
        return cVal;
    }
}

int main()
{
   char cValue='\0';
   char cRet='\0';

   printf("Enter a charecter to change its case:\n");
   scanf("%c",&cValue);

   cRet=Toggle(cValue);

   printf("%c is converted into %c..",cValue,cRet);
    return 0;
}