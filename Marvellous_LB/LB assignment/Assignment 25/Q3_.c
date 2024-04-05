#include<stdio.h>

int DiffSmallCap(char *Arr)
{
    int iSmall=0,iCap=0;

    while(*Arr!='\0')
    {
        if((*Arr>='a')&&(*Arr<='z'))
        {
            iSmall++;
        }
        else if((*Arr>='A')&&(*Arr<='Z'))
        {
            iCap++;
        }

        *Arr++;
    }

    return iSmall-iCap;
}

int main()
{
    char Arr[20];

    printf("Enter a string:\n");
    scanf("%[^'\n']s",Arr);

    int iRet=DiffSmallCap(Arr);

    if(iRet<0)
    {
        iRet=-iRet;
    }

    printf("Difference between small and capital letters is:\t%d",iRet);

    return 0;
}