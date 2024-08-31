#include<stdio.h>

void Display(int iVal)
{
    if(iVal<0)
    {
        iVal=-iVal;
    }
    
    switch (iVal)
    {
    case 1:
    printf("One");
        break;
    case 2:
    printf("Two");
        break;
    case 3:
    printf("Three");
        break;
    case 4:
    printf("Four");
        break;
    case 5:
    printf("Five");
        break;
    case 6:
    printf("Six");
        break;
    case 7:
    printf("Seven");
        break;
    case 8:
    printf("eight");
        break;
    case 9:
    printf("Nine");
        break;
    default:
    printf("Invalid input");
        break;
    }
}

int main()
{
   int iNo=0;

   printf("enter a number to covert into word:\t");
   scanf("%d",&iNo);

   Display(iNo);

   return 0;
}