/*
row=4
col=4

****
2222
****
3333
 
*/
#include<stdio.h>

void Display(int iRows,int iCols)
{
    int iR=0,iC=0;

    for(iR=1;iR<=iRows;iR++)
    {
        for(iC=1;iC<=iCols;iC++)
        {
            if(iR%2!=0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",iR);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iRows=0,iCols=0;

    printf("enter number of rows:\t");
    scanf("%d",&iRows);

    printf("enter number of columns:\t");
    scanf("%d",&iCols);

    Display(iRows,iCols);

    return 0;
}