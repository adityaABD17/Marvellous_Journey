#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    if(iVal<0)
    {
        iVal=-iVal;
    }
 
    for(iCnt=(-iVal);iCnt<=iVal;iCnt++)
        {
            printf("%d\t",iCnt);
        }
}


int main()
{
    int iNo=0;

    printf("Enter a number you want to print full line:\t");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}