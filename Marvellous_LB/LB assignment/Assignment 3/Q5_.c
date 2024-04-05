#include <stdio.h>
#include<stdbool.h>

char Vowel(char c)
{
  int lowercase_vowel, uppercase_vowel;
      // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
       // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
    {
      return true;
    }
}

int main() {
    char cVar=0;
    printf("Enter an alphabet: ");
    scanf("%c", &cVar);

    int iRet=Vowel(cVar);
    if(iRet==true)
    {
      printf("%c is a vowel.", cVar);
    }

  else{
     printf("%c is a consonant.", cVar);
      }
    
    return 0;
}