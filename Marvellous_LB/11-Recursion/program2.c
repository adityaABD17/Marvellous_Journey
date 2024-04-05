#include<stdio.h>

void DisplayR(int iNo)  //Recursive
{
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);  //Recursive Call
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number : ");
    scanf("%d",iValue);

    printf("Inside Main\n");

    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}