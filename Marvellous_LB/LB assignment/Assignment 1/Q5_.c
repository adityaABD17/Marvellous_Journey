#include<stdio.h>
void Display(int iNo)
{   
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
}

int main()
{

    int iNo=0;
    printf("Enter a number of iterations of * :");
    scanf("%d",&iNo);   

    Display(iNo);

    return 0;

}
