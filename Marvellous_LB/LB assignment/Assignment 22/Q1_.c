#include<stdio.h>

void Display(int iRows,int iCols)
{
    int iR=0,iC=0,iNo=0;
    for(iR=1;iR<=iRows;iR++)
    {
        for(iC=iCols;iC>=1;iC--)
        {
                if(iC<=iR)
                {
                    printf("*\t");
                }
                else
                {
                    printf("#\t");
                }
         }
         printf("\n");
    }
}

int main()
{
    int iRows=0,iCols=0;


    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iRows,&iCols);

    Display(iRows,iCols);

    return 0;
}