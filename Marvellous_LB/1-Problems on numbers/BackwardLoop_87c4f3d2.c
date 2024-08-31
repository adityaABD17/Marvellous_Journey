#include<stdio.h>
void BackwardLoop(int iNo)
{
    int iCnt=0;
    printf("-----------------------------\n");

    iCnt=iNo;
    while(iCnt>0)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
     printf("\n--------------------------\n");
}

int main()
{
    int iValue=0;

    printf("Enter number to loop backward and print:\t");
    scanf("%d",&iValue);

    BackwardLoop(iValue);
}