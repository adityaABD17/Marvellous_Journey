#include<stdio.h>
void Display(int iNo)
{
   int iNum=0;
    for(iNum=1;iNum<=iNo;iNum++)
    {
        printf("%d\n",iNum);
    }
}

int main()
{
    int iNum=0;
    printf("Enter Number of iterations:\n");
    scanf("%d",&iNum);

    Display(iNum);
}