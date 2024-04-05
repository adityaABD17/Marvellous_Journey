#include<stdio.h>
void Display(int iNo)
{
   int iNum=0;
   iNum=1;
    while(iNum<=iNo)
    {
        printf("number is:%d\n",iNum);
        iNum++;
    }
}

int main()
{
    int iNum=0;
    printf("Enter Number of iterations:\n");
    scanf("%d",&iNum);

    Display(iNum);
}