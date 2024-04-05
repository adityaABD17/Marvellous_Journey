#include<stdio.h>

void Print5()
{
    int iCnt=0;
    for (iCnt=5;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    Print5();

    return 0;
}
