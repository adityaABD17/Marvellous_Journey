#include<stdio.h>

void Display(int iRows,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRows;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iNo1=0,iNo2=0; 

    printf("Enter Number of rows:\t");
    scanf("%d",&iNo1);
    printf("Enter Number of columns:\t");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}