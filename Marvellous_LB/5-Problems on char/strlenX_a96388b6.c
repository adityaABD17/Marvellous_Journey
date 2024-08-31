#include<stdio.h>
#include<stdlib.h>

int strlenX(char *str)
{
    int iCnt=0,i=0;

    for(i=0;str[i]!='\0';i++)
    {
        iCnt++;
    }
  return iCnt;
}

int main()
{
    char Arr[20];
    
    printf("Enter the string:\n");
    scanf("%[^'\n']",Arr);

    int iRet=strlenX(Arr);

    printf("Elements in the array are : %d",iRet);

    return 0;

}