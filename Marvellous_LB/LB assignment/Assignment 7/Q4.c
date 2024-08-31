#include<stdio.h>

void Display(int iVal)
{
    int iCnt=0;

    if(iVal<0)
    {
        for(iCnt=-1;iCnt>=iVal;iCnt--)
        {
            if(iCnt%2!=0)
            {
                printf("%d\n",iCnt);
            }
        }
    }
    else
    {
        for(iCnt=1;iCnt<=iVal;iCnt++)
        {
           if(iCnt%2!=0)
           {
            printf("%d\n",iCnt);
           }
        }
    }
}

int main()
{
    int iNo=0;

    printf("Enter till how many numbers you want to print:\t");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}